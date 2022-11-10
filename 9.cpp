#include <iostream>
int main() {
	int s, m, h;
	do {
		std::cout << "enter how many seconds have passed :" << std::endl;
		std::cin >> s;
	} while (s < 0 || s>86400);
	h = s / 3600;
	s %= 3600;
	m = s / 60;
	std::cout << "It is " << h << "hours " << m << "minutes" << std::endl;
}