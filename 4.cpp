
#include <iostream>
int summ(int x) {
    int a = x / 100;
    int b = (x / 10) % 10;
    int c = x % 10;
    return a + b + c;
}

int main()
{
    int chislo;
    std::cout << "vvedite chislo\n";
    std::cin >> chislo;
    std::cout << "Summa cifr v nem=" << summ(chislo);
    return 0;

}

