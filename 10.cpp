#include <iostream>


int main() {
	int a, b, c;
	std::cout << "Enter side a: ";
	std::cin >> a;
	std::cout << "Enter side b: ";
	std::cin >> b;
	std::cout << "Enter side c: ";
	std::cin >> c;
	if (a == b || a == c || b == c)
		std::cout << "The triangle is isosceles";
	else
		std::cout << "The triangle is not isosceles";
	return 0;



}