#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	double c;
	double S;
	




	std::cout << "������� �������� ������� ������ :" << std::endl;
	std::cin >> a;
	std::cout << "������� �������� ������� ������ ������ :" << std::endl;
	std::cin >> b;
	c = pow(a, 2) + pow(b, 2);

	std::cout << "���������� = " << c << std::endl;

	S = 0.5 * a * b;
		std::cout << " ������� �������������� ������������ = " << S << std::endl;
	return 0;
}