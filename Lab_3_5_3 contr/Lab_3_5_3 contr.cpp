#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

double square(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main(int argc, char** argv)
{
	int magicNumber = 0;
	while (magicNumber != 3)
	{
		cout << "enter 1 to calculate square of versatile triangle" << endl;
		cout << "enter 2 to calculate square of equilateral triangle" << endl;
		cout << "enter 3 to exit" << endl;
		cin >> magicNumber;

		if (magicNumber == 1)
		{
			int a, b, c;
			cin >> a >> b >> c;
			cout << square(a, b, c);
		}

		else if (magicNumber == 2) 
		{
			int a;
			cin >> a;
			cout << square(a, a, a);
		}


		if (magicNumber == 3)
		{
			cout << "Exit";
			break;
		}

	};


	return 0;
}