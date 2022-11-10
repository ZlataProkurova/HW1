
#include <iostream>

int main()
{
    float a;
    float b;
    float c;
    float d;

    std::cout << "Vvedite 4 veshestvennix chisla:\n";
    std::cin >> a >> b >> c >> d;
    if (((a <= c) && (b <= d)) || ((a <= d) && (b <= c))) {
        std::cout << "Pr-nik so storanami ab pomestitsya v pr-nik so storonami cd\n";
    }
    else {
        std::cout << "Pr-nik so storanami ab NE pomestitsya v pr-nik so storonami cd\n";
    }
    return 0;
}

