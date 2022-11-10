#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, ñ;
	std::cout << "Введите значение первой стороны треугольника :" << std::endl;
	std::cin >> a;
	std::cout << "Введите значение второй стороны треугольника :" << std::endl;
	std::cin >> b;
	std::cout << "Введите значение третьей стороны треугольника :" << std::endl;
	std::cin >> ñ;
	float ma = 0.5 * sqrt(2 * b * b + 2 * ñ * ñ - a * a);
	std::cout << "Ìåäèàíà à = " << ma << std::endl;
	float mb = 0.5 * sqrt(2 * a * a + 2 * ñ * ñ - b * b);
	std::cout << "Ìåäèàíà â = " << mb << std::endl;

	float mc = 0.5 * sqrt(2 * a * a + 2 * b * b - ñ * ñ);
	std::cout << "Ìåäèàíà ñ = " << mc << std::endl;
}
