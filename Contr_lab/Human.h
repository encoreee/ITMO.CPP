#pragma once
#include <string>
#include "PersonCard.h"
using namespace std;

class Human
{
public:

	Human(string, string);
	Human();
	~Human();

	void set_name(string);
	string get_name();
	void set_last_name(string);
	string get_last_name();
	void set_card(PersonCard* cd);
	PersonCard* get_card();

	virtual Human get() = 0;

	friend bool operator< (const Human&, const Human&);
	friend bool operator> (const Human&, const Human&);
	friend bool operator== (const Human&, const Human&);
	friend bool operator!= (const Human&, const Human&);

private:

	string name;
	string last_name;
	PersonCard* card;

};

