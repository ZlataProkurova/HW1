

#include <iostream>

void palindrom(int x) {
    if ((x / 1000 == x % 10) && ((x / 100) % 10 == (x % 100) / 10)) {
        std::cout << "Chislo yavlaetsya polindromom\n";
  }
    else {
        std::cout << "Chislo  NE yavlaetsya polindromom\n";
    }
}

int main()
{
    int x;
    std::cout << "Vvedite chislo\n";
    std::cin >> x;
    palindrom(x);
    return 0;

}

