#pragma once
#include <string>
#include <list>
#include "Human.h"

class AdressBook
{
	std::string name;
	std::list<Human*> arr;
	std::list<Human*>::iterator iter;

public:

	AdressBook(string);
	AdressBook();
	~AdressBook();
	void setName(string);
	string getName();
	int  getSize();
	void addPerson(Human*);
	std::list<Human*> Out();
	void Sort();
	void delPerson(int i);
	Human* findPerson(string, string);


};

