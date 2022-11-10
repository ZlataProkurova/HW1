#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	double c;
	double S;
	




	std::cout << "Введите значение первого катета:" << std::endl;
	std::cin >> a;
	std::cout << "Введите значение второго катета катета :" << std::endl;
	std::cin >> b;
	c = sqrt(pow(a, 2) + pow(b, 2));

	std::cout << "Гипотенуза = " << c << std::endl;

	S = 0.5 * a * b;
		std::cout << " Площадь прямоугольного треугольника = = " << S << std::endl;
	return 0;
}
