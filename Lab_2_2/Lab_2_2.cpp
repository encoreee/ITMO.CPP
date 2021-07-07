#include <iostream>

int main()
{
	int a, b, temp;
	std::cout << "a = "; std::cin >> a;
	std::cout << "b = "; std::cin >> b;
	while (a != b)
	{
		if (a > b)
			a -= b; // аналогично выражению a = a - b
		else
			b -= a;
	}
	std::cout << "НОД = " << a << std::endl;
}