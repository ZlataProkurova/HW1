#include <iostream>
using namespace std;
int main()
{
    int day,dur ;
    double c;
    std::cout << "enter the cost of a minute of conversation : ";
    std::cin >> c;
    std::cout << "enter the duration in minutes : ";
    std::cin >> dur;
    std::cout << " enter the day:  ";
    std::cin >> day;

    c *= dur;

    if (day == 6 || day == 7)
        c -= c * 0.2; 
    std::cout << "you have received a 20% discount!" << std::endl;
    std::cout << c << std::endl;
    return 0;
}