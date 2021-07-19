#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

std::string convertToString(int* a, int size)
{
	std::string str;
	for (size_t i = 0; i < size; i++)
	{
		str += std::to_string(a[i]);
		str += " ";

	}

	return str;
}

int* sort(const int* a,  int size)
{
	int* mas = new int[size];
	int min = 0; // для записи минимального значения
	int buf = 0; // для обмена значениями

	for (unsigned i = 0; i < size; i++)
	{
		mas[i] = a[i];

	}

	for (int i = 0; i < size; i++)
	{
		min = i; // номер текущей ячейки, как ячейки с минимальным значением
		// в цикле найдем реальный номер ячейки с минимальным значением
		for (int j = i + 1; j < size; j++)
			min = (mas[j] < mas[min]) ? j : min;
		// перестановка этого элемента, поменяв его местами с текущим
		if (i != min)
		{
			buf = mas[i];
			mas[i] = mas[min];
			mas[min] = buf;
		}
	}
	return mas;
}

int main()
{
	const int N = 10;
	int source[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	int* dest = sort(source, N);
	
	int a_size = sizeof(source) / sizeof(int);

	std::ofstream out("D:\\array.txt");

	if (!out.is_open())
	{
		std::cout << "Error\n";
		return 1;
	}

	std::string line = convertToString(source, a_size);
	out << line << std::endl;

	dest = sort(source, N);

	line = convertToString(dest, a_size);
	out << line << std::endl;

	out.close();
}

