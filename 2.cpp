#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double r;
	double S;
	double L;
	double PI = 3.14;




	std::cout << "������� ������ ���������� :" << std::endl;
	std::cin >> r;

	S = 2 * PI * pow(r, 2);

	std::cout << "������� ���������� = " << S << std::endl;

	L = 2 * PI * r;
	std::cout << " ����� ���������� = " << L << std::endl;
	return 0;
}