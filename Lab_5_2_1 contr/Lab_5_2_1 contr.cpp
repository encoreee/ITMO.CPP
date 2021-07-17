#include <iostream>

int* max_vect(int n, int* a, int* b);
int max(int a, int b);

int main()
{
	int a[] = { 1,2,3,4,5,6,7,2 };
	int b[] = { 7,6,5,4,3,2,1,3 };
	int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива
	int* c; //Указатель на результирующий массив
	c = max_vect(kc, a, b); //вызов функции для создания массива
	for (int i = 0; i < kc; i++) //Вывод результата.
		std::cout << c[i] << " ";
	std::cout << std::endl;
	delete[]c; //Возврат памяти.
}

int* max_vect(int n, int* a, int* b)
{
	int* res = new int[n];
	for (int i = 0; i < n; i++)
	{
		res[i] = max(a[i], b[i]);
	}
	return res;
}

int max(int a, int b)
{
	int max;
	if (a >= b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	return max;
}
