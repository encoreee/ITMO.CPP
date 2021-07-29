#include "Company.h"

std::string Company::get_title()
{
    return Company::title;
}

void Company::set_title(std::string t)
{
    Company::title = t;
}
