

#include <iostream>

int main()
{
    int chislo[3]{}; //объявляем массив длиной в 3 символа
    int i;
    int x;
    int b;
    std::cout << "Vvedite chislo\n";
    std::cin >> x;
    for (i = 0; i < 3; i++) { //цикл, который позволяет заполнить массив
        chislo[i] = x % 10; //элемент массива с индексом i получает значение x % 10
        x = x / 10; //целочисленно уменьшаем х в 10 раз, чтобы избавиться от последней цифры
    }
    std::cout << "Vvedite chislo b:\n";
    std::cin >> b;
    if (b < chislo[0] * chislo[1] * chislo[2]) {
        std::cout << "Proizvedenie cifr bolshe chisla b\n";

    }
    else {
        std::cout << "Proizvedenie ne bolshe chisla b\n";
    }
    if ((chislo[0] + chislo[1] + chislo[2]) % 7 == 0) {
        std::cout << "Summa cifr kranta 7\n";
    }
    else {
        std::cout << "Summa cifr ne kranta 7\n";
    }
    return 0;

}

