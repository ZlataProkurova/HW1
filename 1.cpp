#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int b1, b2, h;
	double S;



	std::cout<<"������� ������ ���������: "<< std:: endl;
	std::cin >> b1; 
	std::cout << "������� ������� ���������: " << std::endl;
	std::cin >> b2;
	std::cout << "������� ������: " << std::endl;
	std::cin >> h;

	
		S = 0.5 * (b1 + b2) * h;

		std:: cout<<"������� �������� ����� = "<< S <<std::endl;
}