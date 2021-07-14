#include <iostream>
#include <math.h>

int main()
{
	std::cout << "Enter score to rich:" << std::endl;
	unsigned int score = 0;
	int sum = 0;

	for (; sum <= score;)
	{
		std::cout << "Enter x:" << std::endl;
		double x;
		std::cin >> x;
		std::cout << "Enter y:" << std::endl;
		double y;
		std::cin >> y;
		std::cout << x << "\t" << y << std::endl;
		double r = sqrt(pow(x, 2) + pow(y, 2));

		if (r > 3)
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
	if (sum >= score - 5 && sum != 0)
	{
		std::cout << "Profy!" << std::endl;
	}

	else if (sum >= score - 15 && sum != 0)
	{

	}
	else
	{
		std::cout << "Noob!" << std::endl;
	}
}
