#pragma once
#include "human.h"
#include <string>
#include <vector>
class Student : public Human {
public:
	// ����������� ������ Student
	Student(std::string last_name,
		std::string name,
		std::string second_name,
		std::vector<int> scores) : Human(last_name, name, second_name) {
		this->scores = scores;
	}
	// ��������� �������� ����� ��������
	float get_average_score()
	{
		// ����� ���������� ������
		unsigned int count_scores = this->scores.size();
		// ����� ���� ������ ��������
		unsigned int sum_scores = 0;
		// ������� ����
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}

	std::string get_info()
	{
		std::string info = last_name + " " + name + " " + second_name;
		info.append(", average scores: ");
		info.append(std::to_string(get_average_score()));
		return info;
	}
private:
	// ������ ��������
	std::vector<int> scores;
};