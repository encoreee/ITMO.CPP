#include <iostream>

int addNumders(int n)
{
	if (n == 1) return 1; // выход из рекурсии
	else return (n + addNumders(n - 1));
}

int gcd(int m, int n)
{
	if (n == 0) return m;
	return gcd(n, m % n);
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << addNumders(n) << "\n";


	int m, k;
	std::cin >> m;
	std::cin >> k;
	std::cout << gcd( m, k) << "\n";
}

