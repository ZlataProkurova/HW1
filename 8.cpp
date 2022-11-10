#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, с;
	std::cout << "¬ведите значение первой стороны треугольника :" << std::endl;
	std::cin >> a;
	std::cout << "¬ведите значение второй стороны треугольника :" << std::endl;
	std::cin >> b;
	std::cout << "¬ведите значение третьей стороны теугольника :" << std::endl;
	std::cin >> с;
	float ma = 0.5 * sqrt(2 * b * b + 2 * с * с - a * a);
	std::cout << "ћедиана а = " << ma << std::endl;
	float mb = 0.5 * sqrt(2 * a * a + 2 * с * с - b * b);
	std::cout << "ћедиана в = " << mb << std::endl;

	float mc = 0.5 * sqrt(2 * a * a + 2 * b * b - с * с);
	std::cout << "ћедиана с = " << mc << std::endl;
}