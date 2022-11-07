#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	double c;
	double S;
	




	std::cout << "Ââåäèòå çíà÷åíèå ïåðâîãî êàòåòà :" << std::endl;
	std::cin >> a;
	std::cout << "Ââåäèòå çíà÷åíèå âòîðîãî êàòåòà êàòåòà :" << std::endl;
	std::cin >> b;
	c = sqrt(pow(a, 2) + pow(b, 2));

	std::cout << "Ãèïîòåíóçà = " << c << std::endl;

	S = 0.5 * a * b;
		std::cout << " Ïëîùàäü ïðÿìîóãîëüíîãî òðåóãîëüíèêà = " << S << std::endl;
	return 0;
}
