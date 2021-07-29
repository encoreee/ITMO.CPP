#pragma once
#include "Human.h"
#include "University.h"
class Student :
    public Human
{
private:
    University * university;
public:
    void set_univer(University* u);
    University* get_univer();
};

