#pragma once
#include "human.h"
#include <string>
class Teacher : public Human {
public:
	Teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		unsigned int work_time
	) : Human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	unsigned int get_work_time()
	{
		return this->work_time;
	}

	std::string get_info()
	{
		std::string info = last_name + " " + name + " " + second_name;
		info.append(", work time: ");
		info.append(std::to_string(get_work_time()));
		return info;
	}
private:
	unsigned int work_time;
};

