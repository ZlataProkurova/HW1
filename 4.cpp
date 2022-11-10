
#include <iostream>
int summ(int x) { //создаем целочисленную функцию с параметром х
    int a = x / 100;
    int b = (x / 10) % 10;
    int c = x % 10;
    return a + b + c;//возвращаем целочисленную сумму 
}

int main()
{
    int chislo;
    std::cout << "vvedite chislo\n";
    std::cin >> chislo;
    std::cout << "Summa cifr v nem=" << summ(chislo); //выводим в консоль предложение и значение вызванной функции от аргумента, который был введен с клавиатуры
    return 0;

}

