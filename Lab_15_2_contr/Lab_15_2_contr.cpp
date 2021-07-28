#include <list>
#include <algorithm>
#include <iostream>
#include "IdCard.h"
#include "student.h"
#include "Group.h"

int main()
{
	IdCard* idc = new IdCard(123456, "Базовый");
	IdCard* idc2 = new IdCard(654321, "Базовый");
	Student* student03 = new Student("Петр", "Петров", idc2);
	Student* student04 = new Student("Семен", "Смирнов", idc);
	Student* student05 = new Student("Саша", "Коен", idc2);
	Student* student06 = new Student("Дмитрий", "Ионов", idc);

	Group gr1957("1957");
	gr1957.addStudent(student03);
	gr1957.addStudent(student04);
	gr1957.addStudent(student05);
	gr1957.addStudent(student06);

	gr1957.GroupOut();
}

