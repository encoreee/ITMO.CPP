// Lab_2_5_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	std::cout << "Enter amount!\n";
	int amount;
	int counter = 0;
	std::cin >> amount;
	while (amount >= 10)
	{
		amount -= 10;
		counter++;
		if (amount < 10)
		{
			while (amount >= 5)
			{
				amount -= 5;
				counter++;
				if (amount < 5)
				{
					while (amount >= 2)
					{
						amount -= 2;
						counter++;
						if (amount < 2)
						{
							while (amount == 1)
							{
								amount -= 1;
								counter++;

							}
						}
					}
				}
			}
		}
	}
	std::cout << counter;




}
