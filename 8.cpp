#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, �;
	std::cout << "������� �������� ������ ������� ������������ :" << std::endl;
	std::cin >> a;
	std::cout << "������� �������� ������ ������� ������������ :" << std::endl;
	std::cin >> b;
	std::cout << "������� �������� ������� ������� ����������� :" << std::endl;
	std::cin >> �;
	float ma = 0.5 * sqrt(2 * b * b + 2 * � * � - a * a);
	std::cout << "������� � = " << ma << std::endl;
	float mb = 0.5 * sqrt(2 * a * a + 2 * � * � - b * b);
	std::cout << "������� � = " << mb << std::endl;

	float mc = 0.5 * sqrt(2 * a * a + 2 * b * b - � * �);
	std::cout << "������� � = " << mc << std::endl;
}