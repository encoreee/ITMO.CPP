#include "Student.h"

void Student::set_univer(University* u)
{
	Student::university = u;
}

University* Student::get_univer()
{
	return university;
}
