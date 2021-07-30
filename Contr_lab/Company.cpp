#include "Company.h"

Company::Company(std::string t)
{
    Company::title = t;
}

Company::~Company()
{
}

std::string Company::get_title()
{
    return Company::title;
}

void Company::set_title(std::string t)
{
    Company::title = t;
}
