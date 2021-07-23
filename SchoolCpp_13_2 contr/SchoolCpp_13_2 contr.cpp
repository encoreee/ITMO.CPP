#include <iostream>
#include <vector>
#include "Human.h"
#include "Student.h"
#include "Teacher.h"
int main()
{
	std::vector<int> scores;
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	Student* stud = new Student("Петров", "Иван", "Алексеевич", scores);
	unsigned int teacher_work_time = 40;
	Teacher* tch = new Teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	Human* hmn = new Human("Райокв", "Александр", "Николаевич");

	Human* arr[10];
	arr[0] = stud;
	arr[1] = tch;
	arr[2] = hmn;

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << arr[i]->get_info() << std::endl;
	}

	return 0;
}