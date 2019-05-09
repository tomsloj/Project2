#include <iostream>

#include "Student.hpp"
#include "Human.hpp"

using namespace std;

void Student::set_student(string PESEL, string name, string surname, int IQ)
{
    setPESEL( PESEL );
    setName( name );
    setSurname( surname );
    this->IQ=IQ;
}

void Student::get_student()
{
    cout<<"\nNAME:"<<getName();
    cout<<"\nSURNAME:"<<getSurname();
    cout<<"\nPESEL:"<<getPESEL();
    cout<<"\nIQ:"<<this->IQ;
}

void Student::operator++()
{
    this->IQ=this->IQ+1;
}

