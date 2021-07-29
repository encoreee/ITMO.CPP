#include "College.h"

void College::set_comp(Company* c)
{
	College::company = c;
}

Company* College::get_comp()
{
	return company;
}
