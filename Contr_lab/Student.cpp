#include "Student.h"
Student::Student(std::string n, std::string lN) : Human(n, lN)
{
}

Student::~Student()
{
}
void Student::set_univer(University* u)
{
	Student::university = u;
}

University* Student::get_univer()
{
	return university;
}

Human* Student::get()
{
	return this;
}