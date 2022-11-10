#include <iostream>

int main()
{
	using namespace std;

	int n = 0, d = 0;
	std::cout << "Enter the three-digit number= "; 
	std::cin >> n;

	
	std::cout << "Enter one more (not only three-digit) number d= "; 
	std::cin >> d;

	if (n >= 100 && n <= 999) { 
		int a = 0, b = 0, c = 0; 
		a = n / 100; 
		n -= n / 100 * 100;
		b = n / 10; 
		n -= n / 10 * 10;
		c = n; 

		int s = 0;
		s = (a * b * c); 
		std::cout << "The product of a 3 digits is " << s << std::endl;
		if (s > d) { 
			std::cout << "The PRODUCT of the digits of a three-digit number is GREATER than the number!" << std::endl; 
		}
		else if (s < d) { //åñëè d áîëüøå
			std::cout << "The NUMBER is GREATER than the product of the digits of a three-digit number!" << std::endl; 
		}
		else if (s == d) 
			std::cout << "The number is EQUAL to the product of the digits of a three-digit number!" << std::endl; 
		int m = 0;
		m = (a + b + c); 
		std::cout << "The sum of a 3 digits is " << m << std::endl;
		if (m % 7 == 0) 
			std::cout << "The sum of the digits of a three-digit number IS a multiple of 7!" << std::endl;
		else
			std::cout << "The sum of the digits of a three-digit number IS NOT a multiple of 7!" << std::endl;

	}
	else {
		std::cout << "Error! The three-digit number should have 3 digits!" << std::endl; 
	}

	return 0;

}
