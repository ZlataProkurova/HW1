

#include <iostream>

int main()
{
    int chislo[3]{};
    int i;
    int x;
    int b;
    std::cout << "Vvedite chislo\n";
    std::cin >> x;
    for (i = 0; i < 3; i++) {
        chislo[i] = x % 10;
        x = x / 10;
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

