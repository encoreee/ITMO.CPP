#pragma once
#include <string>
#include <sstream>
#pragma once 
class Human {
public:
	// ����������� ������ human
	Human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// ��������� ��� ��������
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}
	
	virtual std::string get_info()
	{
		return last_name + " " + name + " " + second_name;
	}


protected:
	std::string name; // ���
	std::string last_name; // �������
	std::string second_name; // ��������
};

