

#include <iostream>
#include <math.h>

void mediana(float a, float b, float c) {
    float med1 = 0.5 * sqrt(2 * (a * a + c * c) - b * b);
    float med2 = 0.5 * sqrt(2 * (b * b + c * c) - a * a);
    float med3 = 0.5 * sqrt(2 * (a * a + b * b) - c * c);
    float med4 = 0.5 * sqrt(2 * (med1 * med1 + med3 * med3) - med2 * med2);
    float med5 = 0.5 * sqrt(2 * (med2 * med2 + med3 * med3) - med1 * med1);
    float med6 = 0.5 * sqrt(2 * (med1 * med1 + med2 * med2) - med3 * med3);
    std::cout << "Mediana 1 novogo tr-ka="<<med4<<std::endl<< "Mediana 2 novogo tr-ka=" << med5 << std::endl << "Mediana 3 novogo tr-ka=" << med6 << std::endl;
}
int main()
{
    float x;
    float y;
    float z;
    std::cout << "Vvedite 1 storonu\n";
    std::cin >> x;
    std::cout << "Vvedite 2 storonu\n";
    std::cin >> y;
    std::cout << "Vvedite 3 storonu\n";
    std::cin >> z;
    if ((x < y + z) && (y < x + z) && (z < y + x)) {
        mediana(x, y, z);
    }
    else {
        std::cout << "Net takogo tr-ka";
    }
    return 0;
}

