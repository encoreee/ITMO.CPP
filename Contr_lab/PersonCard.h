#pragma once
#include <string>
using namespace std;
class PersonCard
{
public:

	void set_phone(string);
	string get_phone();
	void set_adress(string);
	string get_adress();

private:
	string phone;
	string adress;
};

