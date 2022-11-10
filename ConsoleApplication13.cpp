

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

