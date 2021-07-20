// Lab_7_4_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

struct Quadr
{
	double a;
	double b;
	double c;

	Quadr(double a, double b, double c);
	Quadr(const Quadr& obj);
	~Quadr();


	int getRoots(double& r1, double& r2) const;

};

Quadr::Quadr(const Quadr& obj)
{
	this->a = obj.a;
	this->b = obj.b;
	this->c = obj.c;
}

Quadr::Quadr(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

Quadr::~Quadr() {}

int Quadr::getRoots(double& x1, double& x2) const
{
	if ((b * b - 4 * a * c) >= 0) //Если дискриминант больше или равен 0
	{
		x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
		std::cout << "Первый корень равен " << x1 << std::endl;
		x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
		std::cout << "Второй корень равен " << x2 << std::endl;

		if ((b * b - 4 * a * c) == 0)
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return -1;
	}
}