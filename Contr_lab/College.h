#pragma once
#include "Human.h"
#include "Company.h"
#include <string>

class College :
    public  Human
{
   
public:
    College(std::string, std::string);
    ~College();
    void set_comp(Company* c);
    Company* get_comp();
    Human* get();

private:
    Company* company;
};

