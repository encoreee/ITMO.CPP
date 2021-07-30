#include "College.h"

College::College(std::string n, std::string lN) : Human(n, lN)
{
}

College::~College()
{
}

void College::set_comp(Company* c)
{
	College::company = c;
}

Company* College::get_comp()
{
	return company;
}

Human* College::get()
{
	return this;
}
