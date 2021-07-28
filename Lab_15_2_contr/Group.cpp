//#pragma warning (disable:4786)
#include <iostream>
#include <string>
#include <Windows.h>
#include "Group.h"
#include "Student.h"


using namespace std;

void Group::addStudent(Student* newStudent)
{
	string fullName = newStudent->get_last_name() + " " + newStudent->get_name();
	masSt[fullName] = newStudent;
}

void Group::delStudent(string delName, string delLastName)
{
	string fullName = delLastName + " " + delName;
	masSt.erase(fullName);
}

void Group::GroupSort()
{
	//masSt.sort();

}

Student* Group::findStudent(string searchName, string searchLastName)
{
	string fullName = searchLastName + " " + searchName;
	return masSt[fullName];
}




Group::Group(string name)
{
	this->name = name;
}
Group::Group()
{
	name = "Не определена";
}

Group::~Group()
{
	cout << "Dest_Group\n";
}

void Group::setName(string newName)
{
	name = newName;
}

string Group::getName()
{
	return name;
}

int  Group::getSize()
{
	return masSt.size();
}



void Group::GroupOut()
{
	for (auto it = masSt.cbegin(); it != masSt.cend(); it++)
	{
		it->second->display();
	}
}


// перегруженный == для класса Student 
bool operator== (Student& p1, Student& p2)
{
	return (p1.get_name() == p2.get_name() && p1.get_last_name() == p2.get_last_name()) ? true : false;
}

// перегруженный < для класса Student 
bool operator< (Student& p1, Student& p2)
{
	if (p1.get_last_name() == p2.get_last_name())
		return (p1.get_name() < p2.get_name()) ? true : false;
	return (p1.get_last_name() < p2.get_last_name()) ? true : false;
}

// перегруженный != для класса Student
bool operator!= (Student& p1, Student& p2)
{
	return !(p1 == p2);
}

// перегруженный > для класса Student 
bool operator> (Student& p1, Student& p2)
{
	return !(p1 < p2) && !(p2 == p2);
}





