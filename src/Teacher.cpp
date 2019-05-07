#include <iostream>

#include "Teacher.hpp"

using namespace std;

Teacher::Teacher ()
{
    name = NULL;
    surname = NULL;
    academic_degree = NULL;
    age = NULL;
}

void Teacher::set_teacher(string name, string surname, string academic_degree, int age)
{
    this->name=new string;
    *(this->name)=name;

    this->surname=new string;
    *(this->surname)=surname;

    this->academic_degree=new string;
    *(this->academic_degree)=academic_degree;

    this->age=new int;
    *(this->age)=age;
}

void Teacher::get_teacher()
{
    cout<<"**********TEACHER**********";
    if( this->name == NULL || this->surname == NULL
    || this->academic_degree == NULL || this->age == NULL )
    {
        string exception = "TEACHER_DOESN'T_EXIST";
        throw exception;
    }
    cout<<"\nNAME:"<<*(this->name);
    cout<<"\nSURNAME:"<<*(this->surname);
    cout<<"\nACADEMIC DEGREE:"<<*(this->academic_degree);
    cout<<"\nAGE:"<<*(this->age);
}

void Teacher::get_teacher(string tmp)
{
    cout<<"argument:"<<tmp;
    cout<<"**********TEACHER**********";
    cout<<"\nNAME:"<<*(this->name);
    cout<<"\nSURNAME:"<<*(this->surname);
    cout<<"\nACADEMIC DEGREE:"<<*(this->academic_degree);
    cout<<"\nAGE:"<<*(this->age);
}

Teacher::~Teacher()
{
    delete this->name;
    delete this->surname;
    delete this->academic_degree;
    delete this->age;

}
