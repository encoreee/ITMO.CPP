#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

class Triangle
{
	double a, b, c;


public:
	Triangle(double _a, double _b, double _c) :a{ _a }, b{ _b }, c{ _c }{}

	bool exist()
	{

		return !((a + b) < c || (a + c) < b || (b + c) < a);
	}

	double perimeter()
	{
		if (exist())
		{
			return a + b + c;
		}
		else throw OverLength();
	}

	double square()
	{
		if (exist())
		{
			return (0.25 * sqrt((a + b + c) * (b + c - a) * (a + c - b) * (a + b - c)));
		}
		else throw OverLength();
	}



};

class OverLength
{
public: OverLength() : message("Недопустимая длина")
{ }
	  void printMessage() const
	  {
		  cout << message << endl;
	  }
private: string message;
};



int main()
{

	try
	{
		Triangle tr1{ 3, 4, 5 };
		double per = tr1.perimeter();
		double sq = tr1.square();
		system("pause");
		return 1;
	}
	catch (const OverLength& error)
	{
		cout << "ОШИБКА: ";
		error.printMessage();
		return -1;
	}
}