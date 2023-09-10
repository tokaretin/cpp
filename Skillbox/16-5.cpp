/*Задание 5. Умный дом
Что нужно сделать
Разработайте упрощённую модель умного дома для дачи. Выполните симуляцию его
работы на протяжении двух дней. Стартовое время для симуляции умного дома 00:00.
Есть несколько датчиков: датчик температуры снаружи, датчик температуры внутри дома.
В доме расположен электронный умный щиток с автоматами. Каждый автомат отвечает за
включение и отключение определённых устройств или групп устройств:

отключение и включение питания всего дома;
основные розетки дома;
свет внутри дома;
наружный свет в саду;
отопление в помещении;
отопление водопровода, идущего из скважины с насосом;
кондиционер в помещении.
Есть несколько условий по включению/отключению техники в доме и вне его.

+ Как только температура снаружи падает ниже 0 °С, надо включить систему обогрева
водопровода. Если температура снаружи поднялась выше 5 °С, то систему обогрева
водопровода нужно отключить.
+ Если на дворе вечер (время больше 16:00 и меньше 5:00 утра) и снаружи есть какое-то
движение, то необходимо включить садовое освещение. Если движения нет или время не
вечернее, то света снаружи быть не должно.

+ Если температура в помещении упала ниже 22 °С, должно включиться отопление. Как только
температура равна или поднимается выше 25 °С, отопление автоматически отключается.
+ Если температура в помещении поднялась до 30 °С, включается кондиционер. Как только
температура становится 25 °С, кондиционер отключается.
+ Всё освещение в доме также умное и поддерживает настройку цветовой температуры для
комфортного нахождения. Каждый день начиная с 16:00 и до 20:00 температура цвета должна
плавно изменяться с 5000K до 2700К. Разумеется, это изменение должно происходить, если
свет сейчас включён. В 00:00 температура сбрасывается до 5000К.
Все события по отключению и включению устройств должны выводиться в консоль явным образом.
Если устройство не изменило своё состояние (осталось включённым или выключенным), событие
генерироваться не должно! Если свет в доме включён, должна отображаться текущая цветовая температура.

Программа выполняется следующим образом:

Каждый час пользователь сообщает состояние всех основных датчиков и света (температура
снаружи, температура внутри, есть ли движение снаружи, включён ли свет в доме).
Данные параметры вводятся разом в одну строку через пробел, а потом парсятся в переменные
из строкового буфера stringstream.
Информация о движении выводится в формате yes/no.
Включение и отключение света происходит с помощью on/off.
Рекомендации
Состояние переключателей можно хранить в перечислении вида:

enum switches
{>
    LIGHTS_INSIDE = 1,
    LIGHTS_OUTSIDE = 2,
    HEATERS = 4,
    WATER_PIPE_HEATING = 8,
    CONDITIONER = 16
};

Чтобы включить обогреватель, нужно написать switches_state |= HEATERS; Чтобы выключить —
switches_state &= ~HEATERS;

Пример работы программы:



Temperature inside, temperature outside, movement, lights:

10 10 yes on

Heaters ON!

Lights ON!

Color temperature: 5000K

Temperature inside, temperature outside, movement, lights:

10 10 yes on

Color temperature: 5000K

Temperature inside, temperature outside, movement, lights:

30 30 yes on

Heaters OFF!

Conditioner ON!

Color temperature: 5000K

Temperature inside, temperature outside, movement, lights:

30 30 yes on

Color temperature: 5000K

Temperature inside, temperature outside, movement, lights:*/

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
        std::cout << "Enter space-separated values. Exemple \"25 10 yes on\". - Temperature inside, temperature outside, movement, lights: ";
        std::getline(std::cin, input);

        // std::istringstream позволяет нам обрабатывать строку как поток данных.
        std::istringstream iss(input); // создается объект класса std::istringstream с именем iss, который будет использоваться для разбора строки input.
        int temp_inside, temp_outside;
        std::string movement, lights;

        // Здесь используется оператор >>, который извлекает значения из строки iss и присваивает их соответствующим переменным. Это разбивает строку на части, используя пробел как разделитель, и сохраняет значения в переменных temp_inside, temp_outside, movement и lights.
        iss >> temp_inside >> temp_outside >> movement >> lights;

        // систем обогрева водопровода снаружи падает ниже 0 On. до 5°С Off
        if (temp_outside < 0)
        {
            switches_state |= WATER_PIPE_HEATING; // WATER_PIPE_HEATING в состояние "включено" |= - это оператор для побитовой операции "ИЛИ с присваиванием". Это означает, что биты, соответствующие WATER_PIPE_HEATING, будут установлены в 1, при этом остальные биты останутся неизменными. Таким образом, программа отмечает, что обогрев водопровода должен быть включен.
            std::cout << "Heaters ON!" << std::endl;
        }
        else if (temp_outside > 5)
        {
            switches_state &= ~WATER_PIPE_HEATING; // WATER_PIPE_HEATING сбрасывается в состояние "выключено". &= - это оператор для побитовой операции "И с присваиванием". Это означает, что биты, соответствующие WATER_PIPE_HEATING, будут установлены в 0, при этом остальные биты останутся неизменными. Таким образом, программа отмечает, что обогрев водопровода должен быть выключен.
            std::cout << "Heaters OFF!" << std::endl;
        }

        // движение с 16:00 до 05:00 утра в формате yes/no.
        if ((hour >= 16 || hour < 5) && movement == "yes")
        {
            switches_state |= LIGHTS_OUTSIDE;
            std::cout << "Outside Lights ON!" << std::endl;
        }
        else
        {
            switches_state &= ~LIGHTS_OUTSIDE;
            std::cout << "Outside Lights OFF!" << std::endl;
        }

        // отопление в помещении ниже 22°С и выше 25°С
        if (temp_inside < 22)
        {
            switches_state |= HEATERS;
            std::cout << "Heaters ON!" << std::endl;
        }
        else if (temp_inside >= 25)
        {
            switches_state &= ~HEATERS;
            std::cout << "Heaters OFF!" << std::endl;
        }

        // кондер до 30°С и меньше 25°С
        if (temp_inside >= 30)
        {
            switches_state |= CONDITIONER;
            std::cout << "Conditioner ON!" << std::endl;
        }
        else if (temp_inside <= 25)
        {
            switches_state &= ~CONDITIONER;
            std::cout << "Conditioner OFF!" << std::endl;
        }

        // освещение с 16:00 и до 20:00
        if ((hour >= 16 && hour < 20) && (lights == "on"))
        {
            int target_temerature = 2700;
            if (color_temperature > target_temerature)
            {
                color_temperature -= 200;
            }
            else if (color_temperature < target_temerature)
            {
                color_temperature += 200;
            }
            std::cout << "Color temperature: " << color_temperature << "K" << std::endl;
        }
        else if (hour == 0)
        {
            color_temperature = 5000;
            std::cout << "Color temperature: " << color_temperature << "K" << std::endl;
        }

    }

    return 0;
}
