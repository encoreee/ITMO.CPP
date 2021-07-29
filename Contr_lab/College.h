#pragma once
#include "Human.h"
#include "Company.h"

class College :
    public Human
{
    Company* company;
    void set_comp(Company* c);
    Company* get_comp();
};

