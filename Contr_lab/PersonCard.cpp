#include "PersonCard.h"

void PersonCard::set_phone(string phone)
{
    PersonCard::phone = phone;
}
string PersonCard::get_phone()
{
    return PersonCard::phone;
}
void PersonCard::set_adress(string)
{
}
string PersonCard::get_adress()
{
    return PersonCard::adress;
}