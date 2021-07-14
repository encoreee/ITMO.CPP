#include <iostream>
#include <string>

using namespace std;

string privet(string name)
{
	string str = name + ", " + "hello!\n";
	return str;
}
void privet(string name, int k)
{
	cout << name << ", " << "hello! " << "you input " << k << endl;
}
int main()
{
	int k;
	string name;
	cout << "What is your name?" << endl;
	cin >> name;
	string nameOut = privet(name);
	privet(name);
	privet(name, k);
	cout << "Input number:" << endl;
	cin >> k;
	return 0;
}
