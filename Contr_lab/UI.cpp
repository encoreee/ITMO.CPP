#include "UI.h"
#include <iostream>

void UI::showMenu()
{
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
		case 2:
		case 3:
		case 4:
		case 5:
		case 0:
			break;
		default:
			system("clear");
		}

	}
}
