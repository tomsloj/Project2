#include "Teacher.h"
#include <iostream>
using namespace std;
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
