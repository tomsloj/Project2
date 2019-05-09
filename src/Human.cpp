#include <iostream>

#include <Human.hpp>

using namespace std;

Human::Human()
{

}

Human::Human( string PESEL, string name, string surname )
{

}

string Human::getPESEL ()
{
    return PESEL;
}

string Human::getName ()
{
    return name;
}

string Human::getSurname ()
{
    return surname;
}

void Human::setPESEL( string PESEL )
{
    this->PESEL = PESEL;
}

void Human::setName( string name )
{
    this->name = name;
}

void Human::setSurname( string surname )
{
    this->surname = surname;
}