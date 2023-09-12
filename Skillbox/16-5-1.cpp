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

    // Для отслеживания предыдущего состояния устройств
    int prev_switches_state = switches_state;

    for (int hour = 0; hour < 48; hour++)
    {
        std::string input;
        std::cout << "Enter space-separated values. Example: \"25 10 yes on\" - Temperature inside, temperature outside, movement, lights: ";
        std::getline(std::cin, input);

        // std::istringstream позволяет нам обрабатывать строку как поток данных.
        std::istringstream iss(input); // создается объект класса std::istringstream с именем iss, который будет использоваться для разбора строки input.
        int temp_inside, temp_outside;
        std::string movement, lights;

        // Здесь используется оператор >>, который извлекает значения из строки iss и присваивает их соответствующим переменным. Это разбивает строку на части, используя пробел как разделитель, и сохраняет значения в переменных temp_inside, temp_outside, movement и lights.
        iss >> temp_inside >> temp_outside >> movement >> lights;

        // кондер до 30°С и меньше 25°С
        if (temp_inside >= 30)
        {
            switches_state |= CONDITIONER;
        }
        else if (temp_inside <= 25)
        {
            switches_state &= ~CONDITIONER;
        }

        // Включение и отключение устройств
        if (switches_state != prev_switches_state)
        {
            if (switches_state & HEATERS)
            {
                std::cout << "Heaters ON!" << std::endl;
            }
            else
            {
                std::cout << "Heaters OFF!" << std::endl;
            }

            if (switches_state & CONDITIONER)
            {
                std::cout << "Conditioner ON!" << std::endl;
            }
            else
            {
                std::cout << "Conditioner OFF!" << std::endl;
            }

            // Добавьте аналогичную логику для других устройств...
        }

        // движение с 16:00 до 05:00 утра в формате yes/no.
        if ((hour >= 16 || hour < 5) && movement == "yes")
        {
            switches_state |= LIGHTS_OUTSIDE;
        }
        else
        {
            switches_state &= ~LIGHTS_OUTSIDE;
        }

        // отопление в помещении ниже 22°С и выше 25°С
        if (temp_inside < 22)
        {
            switches_state |= HEATERS;
        }
        else if (temp_inside >= 25)
        {
            switches_state &= ~HEATERS;
        }

        // освещение с 16:00 и до 20:00
        if ((hour >= 16 && hour < 20) && (lights == "on"))
        {
            int target_temperature = 2700;
            if (color_temperature > target_temperature)
            {
                color_temperature -= 200;
            }
            else if (color_temperature < target_temperature)
            {
                color_temperature += 200;
            }
            std::cout << "Color temperature: " << color_temperature << "K" << std::endl;
        }
        else if (hour == 0)
        {
            color_temperature = 5000;
        }

        // Проверка на изменение состояния устройств и вывод сообщений только при изменениях
        if (switches_state != prev_switches_state)
        {
            // Для света внутри...
            if (switches_state & LIGHTS_INSIDE)
            {
                std::cout << "Inside Lights ON!" << std::endl;
            }
            else
            {
                std::cout << "Inside Lights OFF!" << std::endl;
            }

            // Для света снаружи...
            if (switches_state & LIGHTS_OUTSIDE)
            {
                std::cout << "Outside Lights ON!" << std::endl;
            }
            else
            {
                std::cout << "Outside Lights OFF!" << std::endl;
            }
        }

        // Обновление предыдущего состояния
        prev_switches_state = switches_state;
    }

    return 0;
}





/////////////////////////////////////////////////////

/*

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

    // Для отслеживания предыдущего состояния устройств
    int prev_switches_state = switches_state;

    for (int hour = 0; hour < 48; hour++)
    {
        std::string input;
        std::cout << "Enter space-separated values. Example: \"25 10 yes on\" - Temperature inside, temperature outside, movement, lights: ";
        std::getline(std::cin, input);

        // std::istringstream позволяет нам обрабатывать строку как поток данных.
        std::istringstream iss(input); // создается объект класса std::istringstream с именем iss, который будет использоваться для разбора строки input.
        int temp_inside, temp_outside;
        std::string movement, lights;

        // Здесь используется оператор >>, который извлекает значения из строки iss и присваивает их соответствующим переменным. Это разбивает строку на части, используя пробел как разделитель, и сохраняет значения в переменных temp_inside, temp_outside, movement и lights.
        iss >> temp_inside >> temp_outside >> movement >> lights;

        // Проверяем изменения в состоянии устройств
        bool heaters_changed = false;
        bool conditioner_changed = false;
        // кондер до 30°С и меньше 25°С
        if (temp_inside >= 30)
        {
            if (!(switches_state & CONDITIONER))
            {
                switches_state |= CONDITIONER;
                conditioner_changed = true;
            }
        }
        else if (temp_inside <= 25)
        {
            if (switches_state & CONDITIONER)
            {
                switches_state &= ~CONDITIONER;
                conditioner_changed = true;
            }
        }

        // Проверяем изменения в отоплении и выводим сообщение, если изменилось
        if (conditioner_changed)
        {
            if (switches_state & CONDITIONER)
            {
                std::cout << "Conditioner ON!" << std::endl;
            }
            else
            {
                std::cout << "Conditioner OFF!" << std::endl;
            }
        }

        // Проверьте изменения в других устройствах и аналогично выведите сообщения, если изменения были.

        // движение с 16:00 до 05:00 утра в формате yes/no.
        bool outside_lights_changed = false;
        if ((hour >= 16 || hour < 5) && movement == "yes")
        {
            if (!(switches_state & LIGHTS_OUTSIDE))
            {
                switches_state |= LIGHTS_OUTSIDE;
                outside_lights_changed = true;
            }
        }
        else
        {
            if (switches_state & LIGHTS_OUTSIDE)
            {
                switches_state &= ~LIGHTS_OUTSIDE;
                outside_lights_changed = true;
            }
        }

        // Проверьте изменения в освещении снаружи и выведите сообщение, если изменения были.
        if (outside_lights_changed)
        {
            if (switches_state & LIGHTS_OUTSIDE)
            {
                std::cout << "Outside Lights ON!" << std::endl;
            }
            else
            {
                std::cout << "Outside Lights OFF!" << std::endl;
            }
        }

        // Проверьте изменения в других устройствах и аналогично выведите сообщения, если изменения были.

        // Обновление предыдущего состояния
        prev_switches_state = switches_state;
    }

    return 0;
}
*/