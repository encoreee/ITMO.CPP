#pragma once
#include <string>
class Company
{

public:

	Company(std::string);
	~Company();
	std::string get_title();
	void set_title(std::string);

private:
	std::string title;
};

