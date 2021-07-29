#include "University.h"

University::University(std::string title)
{
	this->title = title;
}

std::string University::get_title()
{
	return University::title;
}
