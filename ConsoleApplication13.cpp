﻿// ConsoleApplication13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


int main()
{
    srand(time(NULL);
    int x = rand() % 9+1;
    int y = rand() % 9+1;
    if (x == 0) {
        x += 1;
    }
    if (y == 0) {
        y += 1;
    }
    int proizvedenie=0;
    proizvedenie = x * y;
    int test;
    std::cout <<"Kak vi dumaete kakoe proizvedenie etix chisel?\n";
    std::cin >> test;
    if (test == proizvedenie) {
        std::cout << "Vi computer, congr!\n";
    }
    else {
        std::cout << "Neverno\n"<<proizvedenie<<x<<y;
    }
    return 0;
   
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.