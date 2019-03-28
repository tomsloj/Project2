#include "Student.hpp"
#include <iostream>
using namespace std;
void Student::set_student(string PESEL, string name, string surname, int IQ)
{
    this->PESEL=PESEL;
    this->name=name;
    this->surname=surname;
    this->IQ=IQ;
}
void Student::get_student()
{
    cout<<"\nNAME:"<<this->name;
    cout<<"\nSURNAME:"<<this->surname;
    cout<<"\nPESEL:"<<this->PESEL;
    cout<<"\nIQ:"<<this->IQ;
}
void Student::operator++()
{
    this->IQ=this->IQ+1;
}

