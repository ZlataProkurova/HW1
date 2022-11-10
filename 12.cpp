#include <iostream>
using namespace std;

int main() {
	int weight;
	int height;
	std::cout << "Enter your weight :" << std::endl;
	std::cin >> weight;
	std::cout << "Enter your height :" << std::endl;
	std::cin >> height;
    int weight_r = height - 100;
    if (weight > weight_r)
        std::cout << "you need to lose weight " << weight - weight_r << std::endl;
    else if (weight == weight_r)
        std::cout << "Its good!";
    else
        std::cout << "you need to get better at " << weight_r - weight << std::endl ;
   
    return 0;
}
