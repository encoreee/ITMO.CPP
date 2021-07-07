#include <iostream>
#include <math.h>


int main()
{
	system("chcp 1251");
	std::cout.precision(3);
	double p;
	std::cout << "Введите периметр";
	std::cin >> p;
	double a = p / 3;
	double s = sqrt(3 * p * (p - a));
	std::cout << "Площадь = " << s << "\n";
}