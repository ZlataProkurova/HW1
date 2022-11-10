

#include <iostream>
#include <math.h>

float pToPOl(float x, float y){
    return sqrt(x * x + y * y);

}


float fToPol(float x, float y) {
    return atan(y / x);
}

int main()
{
    float x;
    float y;
    std::cout << "Введите декартовы координаты:\n";
    std::cin >> x >> y;
    std::cout<<"Полярные координаты:"<<pToPOl(x, y)<<" "<<fToPol(x,y);
    return 0;


}

