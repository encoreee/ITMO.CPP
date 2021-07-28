#include <iostream>

template<typename T>
double averege(T arr[], int size) {

	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

int main()
{
	int arrint[] = { 9,3,17,6,5,4,31,2,12 };
	int k1 = sizeof(arrint) / sizeof(arrint[0]);

	double arrdouble[] = { 9.4,3.2,17.0,6.6,5.9,4.1,31.31,2.56,12.12 };
	int k2 = sizeof(arrdouble) / sizeof(arrdouble[0]);

	char arrchar[] = { 'a','s','e','f','q','a','a','b','k' };
	int k3 = sizeof(arrchar) / sizeof(arrchar[0]);

	double resint = averege(arrint, k1);
	double resdouble = averege(arrdouble, k2);
	double rechar = averege(arrchar, k3);

	std::cout << "Average int: " << resint << std::endl;
	std::cout << "Average double: " << resdouble << std::endl;
	std::cout << "Average char: " << rechar << std::endl;
}
