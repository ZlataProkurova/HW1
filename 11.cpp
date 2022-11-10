#include <iostream>
using namespace std;

int main() {
	int sum;
	double res;
	std::cout << "Enter the purchase amount :" << std::endl;
	std::cin >> sum;
	if (sum > 1000) {
		res = sum - (sum * 0.1);
		std::cout << "the amount with a discount of 10% = " << res << std::endl;

	}
	else {
		std::cout << "The purchase price is less than 1000, the discount is not valid." << std::endl;
	}
		
	return 0;
}
