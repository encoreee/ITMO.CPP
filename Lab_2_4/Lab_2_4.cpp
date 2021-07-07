#include <iostream>

int main()
{
	system("chcp 1251");
	int s = 0, k, m;
	std::cout << "Введите k и m\n";
	std::cin >> m >> k;
	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) || (i < m))
		{
			s += i;
		}
		else
		{
			continue;
		}
		
	}

	std::cout << s;

	return 0;
}
