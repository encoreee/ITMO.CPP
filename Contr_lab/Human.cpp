#include "Human.h"

Human::Human(string name, string last_name)
{
    Human::set_name(name);
    Human::set_last_name(last_name);
}
Human::~Human()
{
}

Human::Human()
{
}


void Human::set_name(std::string student_name)
{
    Human::name = student_name;
}

std::string Human::get_name()
{
    return Human::name;
}

void Human::set_last_name(std::string student_last_name)
{
    Human::last_name = student_last_name;
}

std::string Human::get_last_name()
{
    return Human::last_name;
}

void Human::set_card(PersonCard* cd)
{
    Human::card = cd;
}

PersonCard* Human::get_card()
{
    return card;
}


bool operator== (const Human& p1, const Human& p2)
{
    return (p1.name == p2.name && p1.last_name == p2.last_name) ? true : false;
}

bool operator< (const Human& p1, const  Human& p2)
{
    if (p1.last_name == p2.last_name)
        return (p1.name < p2.name) ? true : false;
    return (p1.last_name < p2.last_name) ? true : false;
}

bool operator!= (const Human& p1, const Human& p2)
{
    return !(p1 == p2);
}

bool operator> (const Human& p1, const Human& p2)
{
    return !(p1 < p2) && !(p2 == p2);
}
