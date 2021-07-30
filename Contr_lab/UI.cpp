#include "UI.h"
#include "College.h"
#include "Student.h"
#include "AdressBook.h"

#include <iostream>
#include <stdlib.h>
#include <list>

void UI::showMenu()
{
	std::string AdressBookTitle = "Adress book";
	AdressBook book = AdressBook(AdressBookTitle);

	int choose = 1;
	while (choose)
	{
		std::cout << "\tProgram adress book\n" << std::endl;
		std::cout << "\t*********************" << std::endl;
		std::cout << "\tPlease choose action to do:\n\n" << std::endl;
		std::cout << "\t1: Add college\n" << std::endl;
		std::cout << "\t2: Add student\n" << std::endl;
		std::cout << "\t3: Show all persons\n" << std::endl;
		std::cout << "\t4: Find person\n" << std::endl;
		std::cout << "\t5: Delete person\n" << std::endl;
		std::cout << "\t0: Exit\n" << std::endl;


		std::cin >> choose;

		switch (choose)
		{
		case 1:
			UI::addCollege(book);
			system("cls");
			break;
		case 2:
			UI::addStudent(book);
			system("cls");
			break;
		case 3:
			system("cls");
			ShowAll(book);
			system("pause");

		case 4:
			system("cls");
		case 5:
			system("cls");
		case 0:
			break;
		default:
			system("cls");
		}

	}
}

void UI::addCollege(AdressBook& b)
{
	system("cls");
	std::string name;
	std::string lastName;
	std::cout << "\tEnter name\n" << std::endl;
	std::cin >> name;
	std::cout << "\tEnter last name\n" << std::endl;
	std::cin >> lastName;
	College* col = new College(name, lastName);

	std::string title;
	std::cout << "\tEnter company title\n" << std::endl;
	std::cin >> title;

	Company* comp = new Company(title);
	col->set_comp(comp);
	b.addPerson(col);

}

void UI::addStudent(AdressBook& b)
{
	system("cls");
	std::string name;
	std::string lastName;
	std::cout << "\tEnter name\n" << std::endl;
	std::cin >> name;
	std::cout << "\tEnter last name\n" << std::endl;
	std::cin >> lastName;
	Student* st = new Student(name, lastName);

	std::string title;
	std::cout << "\tEnter university title\n" << std::endl;
	std::cin >> title;

	University* univ = new University(title);
	st->set_univer(univ);
	b.addPerson(st);

}

void UI::ShowAll(AdressBook& b)
{
	list<Human*> list = b.Out();

	for (auto it = list.begin(); it != list.end(); it++)
	{
		if (dynamic_cast<College*>(*it))
		{
			College* c = dynamic_cast<College*>(*it);
			std::cout << c->get_last_name() << " " << c->get_name() << " Company: " << c->get_comp()->get_title() << endl;
		}
		if (dynamic_cast<Student*>(*it))
		{
			Student* s = dynamic_cast<Student*>(*it);
			std::cout << s->get_last_name() << " " << s->get_name() << " University: " << s->get_univer()->get_title() << endl;
		}
	}

}

