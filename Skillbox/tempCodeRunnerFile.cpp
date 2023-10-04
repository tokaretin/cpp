char buffer[20]; // 20 байт

    // std::ifstream bank; // "C:\\cpp\\tutorial\\bank.txt"
    // bank.open("C:\\cpp\\tutorial\\bank.txt", std::ios::binary);
    // bank.read(buffer, sizeof(buffer)); // читает первые 20 байт
    //  bank.read(buffer, sizeof(buffer)); // читает вторые 20 байт
    //  bank.read(buffer, sizeof(buffer)); // читает третьи 20 байт
    
    // // for (int i = 0; i < 20; i++) // в этом цикле мы читаем все 20 байт
    // // {
    // //     std::cout << buffer[i];
    // // }

    // buffer[19] = 0; // хдесь, когда мы присваеваем 0, то читаем 19 байт. 1 байт теряется
    // std::cout << buffer << std::endl;