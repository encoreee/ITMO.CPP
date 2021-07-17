#include <iostream>

int sum(int n, int* mas);
int sumNegative(int n, int* mas);
int sumPositive(int n, int* mas);
int sumOdd(int n, int* mas);
int sumEven(int n, int* mas);
int indexOfMax(int n, int* mas);

int main()
{
	const int n = 10;
	int mas[n];
	int s = 0;

	for (int i = 0; i < n; i++)
	{
		std::cout << "mas[" << i << "]=";
		std::cin >> mas[i];
	}
	std::cout << "Sum = " << sum(n, mas);
}

int sum(int n, int* mas)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	return s;
}

int sumNegative(int n, int* mas)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
		{
			s += mas[i];
		}
	}
	return s;
}

int sumPositive(int n, int* mas)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0)
		{
			s += mas[i];
		}
	}
	return s;
}

int sumOdd(int n, int* mas)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			s += mas[i];
		}
	}
	return s;
}

int sumEven(int n, int* mas)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			s += mas[i];
		}
	}
	return s;
}

int indexOfMax(int n, int* mas)
{
	int index = 0;
	for (int i = 1; i < n; i++)
	{
		if (mas[i - 1] < mas[i])
		{
			index = i;
		}
	}
	return index;
}

int indexOfMin(int n, int* mas)
{
	int index = 0;
	for (int i = 1; i < n; i++)
	{
		if (mas[i - 1] > mas[i])
		{
			index = i;
		}
	}
	return index;
}


int multiBetweenIndexes(int n, int* mas)
{
	int indexMax = indexOfMax(n, mas);
	int indexMin = indexOfMin(n, mas);

	if (indexMax == indexMin + 1 || indexMax + 1 == indexMin)
	{
		int multy = mas[indexMin] * mas[indexMax];
		return multy;
	}
	if (indexMin < indexMax)
	{
		int multy = mas[indexMin];
		for (int i = indexMin + 1; i < indexMax; i++)
		{
			multy *= mas[i];
		}
		return multy;
	}
	else 
	{
		int multy = mas[indexMin];
		for (int i = indexMax + 1; i < indexMin; i++)
		{
			multy *= mas[i];
		}
		return multy;
	}
}

