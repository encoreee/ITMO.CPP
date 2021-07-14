

#include <iostream>
double distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

double square(double a, double b, double c)
{
	double p = (a + b + c)/2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
	int x1 = 0, y1 = 0;
	int x2 = 1, y2 = 1;
	int x3 = 2, y3 = 1;
	int x4 = 2, y4 = 0;
	int x5 = 1, y5 = -1;

	double a1 = distance(x1, y1, x2, y2);
	double b1 = distance(x2, y2, x3, y3);
	double c1 = distance(x3, y3, x1, y1);

//	std::cout << a1 <<"\t" << b1 <<"\t" << c1 << std::endl;
	double sq1 = square(a1, b1, c1);
//	std::cout << sq1 << std::endl;
	double a2 = distance(x3, y3, x4, y4);
	double b2 = distance(x4, y4, x5, y5);
	double c2 = distance(x5, y5, x1, y1);

	double sq2 = square(a2, b2, c2);

	double a3 = distance(x1, y1, x3, y3);
	double b3 = distance(x3, y3, x5, y5);
	double c3 = distance(x5, y5, x1, y1);

	double sq3 = square(a3, b3, c3);

	double square = sq1 + sq2 + sq3;

	std::cout << square;

}

