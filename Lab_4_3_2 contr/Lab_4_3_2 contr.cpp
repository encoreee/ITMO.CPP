
#include <iostream>

bool Input(int a, int b) 
{
	std::cout << "enter a:";
	std::cin >> a;
	std::cout << "enter b:";
	std::cin >> b;
	if ((a > 0 && a != NULL) && (b < 0 && b != NULL))
		return true;
	else
		return false;
}

int main()
{
	int a, b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		std::cerr << "error";
		return 1;
	}
	int s = a + b;
	return 0;
}
