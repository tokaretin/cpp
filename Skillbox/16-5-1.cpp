#include <iostream>
#include <sstream>

enum switches
{
    HOUSE_POWER = 1,
    LIGHTS_INSIDE = 2,
    LIGHTS_OUTSIDE = 4,
    HEATERS = 8,
    WATER_PIPE_HEATING = 16,
    CONDITIONER = 32
};

int main()
{
    // Используем отдельные переменные для каждого устройства
    int conditioner_state = 0;
    int heaters_state = 0;
    int lights_outside_state = 0;
    int lights_inside_state = 0;

    int color_temperature = 5000; // Начальная цветовая температура

    // Для отслеживания предыдущего состояния устройств
    int prev_conditioner_state = conditioner_state;
    int prev_heaters_state = heaters_state;
    int prev_lights_outside_state = lights_outside_state;
    int prev_lights_inside_state = lights_inside_state;

    for (int hour = 0; hour < 48; hour++)
    {
        std::string input;
        std::cout << "Enter space-separated values. Example: \"25 10 yes on\" - Temperature inside, temperature outside, movement, lights: ";
        std::getline(std::cin, input);

        std::istringstream iss(input);
        int temp_inside, temp_outside;
        std::string movement, lights;

        iss >> temp_inside >> temp_outside >> movement >> lights;

        // Проверяем изменения состояния каждого устройства отдельно
        // Кондиционер до 30°С и меньше 25°С
        if ((temp_inside >= 30 && prev_conditioner_state == 0) || (temp_inside < 30 && prev_conditioner_state != 0))
        {
            conditioner_state = (conditioner_state == 0) ? CONDITIONER : 0;
            std::cout << (conditioner_state == CONDITIONER ? "Conditioner ON!" : "Conditioner OFF!") << std::endl;
        }

        // Отопление
        if ((temp_inside < 22 && prev_heaters_state == 0) || (temp_inside >= 22 && prev_heaters_state != 0))
        {
            heaters_state = (heaters_state == 0) ? HEATERS : 0;
            std::cout << (heaters_state == HEATERS ? "Heaters ON!" : "Heaters OFF!") << std::endl;
        }

        // Движение снаружи
        if (((hour >= 16 || hour < 5) && movement == "yes" && prev_lights_outside_state == 0) ||
            (!((hour >= 16 || hour < 5) && movement == "yes") && prev_lights_outside_state != 0))
        {
            lights_outside_state = (lights_outside_state == 0) ? LIGHTS_OUTSIDE : 0;
            std::cout << (lights_outside_state == LIGHTS_OUTSIDE ? "Outside Lights ON!" : "Outside Lights OFF!") << std::endl;
        }

        // Освещение внутри
        if (((hour >= 16 && hour < 20) && lights == "on" && prev_lights_inside_state == 0) ||
            (!((hour >= 16 && hour < 20) && lights == "on") && prev_lights_inside_state != 0))
        {
            lights_inside_state = (lights_inside_state == 0) ? LIGHTS_INSIDE : 0;
            std::cout << (lights_inside_state == LIGHTS_INSIDE ? "Inside Lights ON!" : "Inside Lights OFF!") << std::endl;
        }

        // Обновление предыдущего состояния
        prev_conditioner_state = conditioner_state;
        prev_heaters_state = heaters_state;
        prev_lights_outside_state = lights_outside_state;
        prev_lights_inside_state = lights_inside_state;
    }

    return 0;
}
