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
    int switches_state = 0;       // Начальное состояние выключателей
    int color_temperature = 5000; // Начальная цветовая температура

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
        bool conditioner_changed = false;
        if ((temp_inside >= 30 && !(switches_state & CONDITIONER)) || (temp_inside < 30 && (switches_state & CONDITIONER)))
        {
            switches_state ^= CONDITIONER;
            conditioner_changed = true;
        }

        // Отопление
        bool heaters_changed = false;
        if ((temp_inside < 22 && !(switches_state & HEATERS)) || (temp_inside >= 22 && (switches_state & HEATERS)))
        {
            switches_state ^= HEATERS;
            heaters_changed = true;
        }

        // Движение снаружи
        bool lights_outside_changed = false;
        if (((hour >= 16 || hour < 5) && movement == "yes" && !(switches_state & LIGHTS_OUTSIDE)) ||
            (!((hour >= 16 || hour < 5) && movement == "yes") && (switches_state & LIGHTS_OUTSIDE)))
        {
            switches_state ^= LIGHTS_OUTSIDE;
            lights_outside_changed = true;
        }

        // Освещение внутри
        bool lights_inside_changed = false;
        if (((hour >= 16 && hour < 20) && lights == "on" && !(switches_state & LIGHTS_INSIDE)) ||
            (!((hour >= 16 && hour < 20) && lights == "on") && (switches_state & LIGHTS_INSIDE)))
        {
            switches_state ^= LIGHTS_INSIDE;
            lights_inside_changed = true;
        }

        // Выводим сообщения только если состояния изменились
        if (conditioner_changed)
        {
            std::cout << (switches_state & CONDITIONER ? "Conditioner ON!" : "Conditioner OFF!") << std::endl;
        }

        if (heaters_changed)
        {
            std::cout << (switches_state & HEATERS ? "Heaters ON!" : "Heaters OFF!") << std::endl;
        }

        if (lights_outside_changed)
        {
            std::cout << (switches_state & LIGHTS_OUTSIDE ? "Outside Lights ON!" : "Outside Lights OFF!") << std::endl;
        }

        if (lights_inside_changed)
        {
            std::cout << (switches_state & LIGHTS_INSIDE ? "Inside Lights ON!" : "Inside Lights OFF!") << std::endl;
        }
    }

    return 0;
}