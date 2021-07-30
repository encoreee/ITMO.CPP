#pragma once
#include "Human.h"
#include "University.h"
class Student :
    public Human
{

public:
    Student(std::string, std::string);
    ~Student();
    void set_univer(University* u);
    University* get_univer();
    Human* get();

private:
    University* university;


};

