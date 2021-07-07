#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	cout.precision(3);
	string name;
	cout << "Введите свое имя";
	double x;
	double a, b;
	cout << "\nВведите a и b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	x = a / b;
	cout << "\nx = " << x << endl;
	cout << "Привет, " << name << "!\n";
}