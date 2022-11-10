#include <iostream>

using namespace std;

int main()
{
  
    int mounth;
    std::cout << "Enter the month number from 1 to 12 " << endl;
    cin >> mounth;
    if (mounth == 1) 
        std::cout << "winter january" << endl;
    else if (mounth == 2)
        std::cout << "winter february" << endl;
    else if (mounth == 12)
        std::cout << "winter december" << endl;
    else if (mounth==3)
        std::cout << "Spring, march " << endl;
    else if (mounth == 4)
        std::cout << "Spring, april" << endl;

    else if (mounth == 5)
        std::cout << "Spring, may" << endl;

    else if (mounth==6)
        std::cout << "Summer, june" << endl;
    else if (mounth== 7)
        std::cout << "Summer, july" << endl;
    else if (mounth == 8)
        std::cout << "Summer, august" << endl;

    else if (mounth==9)
        std::cout << "Autumn, september" << endl;
    else if (mounth == 10)
        std::cout << "Autumn,october" << endl;
    else if (mounth == 11)
        std::cout << "Autumn,november" << endl;
    else
        std::cout << "You entered incorrect data" << endl;
    
    return 0;
}