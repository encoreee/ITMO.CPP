#include <iostream>
#include <math.h>

int main()
{
	std::cout << "Enter x:";
	double x;
	std::cin >> x;
	std::cout << "Enter y:";
	double y;
	std::cin >> y;
	int sum = 0;

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << x << "\t" << y;
		double r = sqrt(pow(x, 2) + pow(y, 2));

		if (r > 3 ) 
		{
			continue;
		}
		else if (r <= 3 && r > 2)
		{
			sum += 1;
			continue;
		}
		else if (r <= 2 && r > 1)
		{
			sum += 5;
			continue;
		}
		else
		{
			sum += 10;
			continue;
		}
	}
	if (sum >= 25) 
	{
		std::cout << "Profy!";
	}
	else
	{
		std::cout << "Noob!";
	}
}
