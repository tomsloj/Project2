#include <iostream>

#include "Teacher.hpp"
#include "Human.hpp"

using namespace std;

Teacher::Teacher ()
{
    setName ( "" );
    setSurname ( "" );
    academic_degree = NULL;
    age = NULL;
}

void Teacher::set_teacher(string name, string surname, string academic_degree, int age)
{
    setName ( name );

    setSurname ( surname );

    this->academic_degree=new string;
    *(this->academic_degree)=academic_degree;

    this->age=new int;
    *(this->age)=age;
}

void Teacher::writePearson()
{
    if( this->academic_degree == NULL || this->age == NULL )
    {
        string exception = "TEACHER_DOESN'T_EXIST";
        throw exception;
    }
    cout<<"**********TEACHER**********";
    cout<<"\nNAME:"<<getName();
    cout<<"\nSURNAME:"<<getSurname();
    cout<<"\nACADEMIC DEGREE:"<<*(this->academic_degree);
    cout<<"\nAGE:"<<*(this->age);
}

void Teacher::get_teacher(string tmp)
{
    cout<<"argument:"<<tmp;
    cout<<"**********TEACHER**********";
    cout<<"\nNAME:"<<getName();
    cout<<"\nSURNAME:"<<getSurname();
    cout<<"\nACADEMIC DEGREE:"<<*(this->academic_degree);
    cout<<"\nAGE:"<<*(this->age);
}

Teacher::~Teacher()
{
    delete this->academic_degree;
    delete this->age;
}
