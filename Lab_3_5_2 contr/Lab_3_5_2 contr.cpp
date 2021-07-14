#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) 
{
	//cout << pow(48, 1.0 / 3);
	int i;
	float y, y1;
	float x;

	cout << "Enter x: ";
	cin >> x;
	y = x;
	do {
		y1 = y;
		y = 0.5 * (y + 3 * x / (2 * y * y + x / y));
	} while (abs(y - y1) > 1 / 100000);
	cout << "y = " << y << endl;


	return 0;
}