#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double a, b, c, d, x1, x2;
	std::cout << "Введите a " << std::endl;
	cin >> a;
	std::cout << "Введите b " << std::endl;
	cin >> b;
	std::cout << "Введите c " << std::endl;
	cin >> c;
	d = pow(b, 2) - 4 * a * c;
	if (d > 0) {
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);
		cout << "x1= " << x1 << std::endl;
		cout << "x2= " << x2 << std::endl;
	}
	if (d == 0) {
		x1 = -(b / (2 * a));
		cout << "x1 =  " << x1 << std::endl;
	}
	if (d<0)
		cout << "Уравнение не имеет корней";
	return 0;
	
}




