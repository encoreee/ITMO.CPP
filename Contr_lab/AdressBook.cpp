#include "AdressBook.h"

void AdressBook::addPerson(Human* h)
{
	arr.push_back(h);
}

void AdressBook::delPerson(int index)
{
	iter = arr.begin();
	for (int i = 0; i < index; i++) {
		++iter;
	}
	arr.erase(iter);
}

void AdressBook::Sort()
{
	arr.sort();
}

Human* AdressBook::findPerson(string searchName, string searchLastName)
{
	for (auto it = arr.cbegin(); it != arr.cend(); it++)
	{
		if ((*it)->get_name() == searchName && (*it)->get_last_name() == searchLastName)
		{
			return *it;
		}
	}
	return nullptr;
}


AdressBook::AdressBook(string name)
{
	this->name = name;
}
AdressBook::AdressBook()
{
	name = "Не определена";
}

AdressBook::~AdressBook()
{
}

void AdressBook::setName(string newName)
{
	name = newName;
}

string AdressBook::getName()
{
	return name;
}

int  AdressBook::getSize()
{
	return arr.size();
}

list<Human*> AdressBook::Out()
{
	return arr;
}