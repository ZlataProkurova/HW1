#include <iostream>


int main()
{
	setlocale(LC_ALL, "rus"); //даёт возможность использовать русский язык

	int b1, b2, h; //объявляем целочисленные переменные 
	double S; //объявляем вещественную переменную



	std::cout<<"Введите нижнее основание: "<< std:: endl; //выводим в консоль предложение
	std::cin >> b1; //инициализируем переменную с клавиатуры 
	std::cout << "Введите верхнее основание: " << std::endl;
	std::cin >> b2;
	std::cout << "Введите высоту: " << std::endl;
	std::cin >> h;

	
		S = 0.5 * (b1 + b2) * h;

		std:: cout<<"Площадь трапеции = "<< S <<std::endl;
}
