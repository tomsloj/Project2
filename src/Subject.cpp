#include <iostream>
#include "Subject.h"
using namespace std;
template <typename T>
Subject<T>::Subject()
{
    this->amount=0;
}
template <typename T>
void Subject<T>::set_language(string language)
{
    this->language=language;
}
template <typename T>
void Subject<T>::get_language()
{
    cout<<this->language;
}
template <typename T>
T Subject<T>::get_amount()
{
    return this->amount;
}
template <typename T>
void Subject<T>::set_teacher(string name, string surname, string academic_degree, int age)
{
    this->teacher.set_teacher(name,surname,academic_degree,age);
}
template <typename T>
void Subject<T>::add_student(string PESEL, string name, string surname, int IQ)
{
    Student stud;
    stud.set_student(PESEL,name,surname,IQ);
    this->students.push_back(stud);
    ++this->amount;
}
template <typename T>
void Subject<T>::get_students()
{
    cout<<"\n**********STUDENTS**********";
    for(vector<Student>::iterator it=this->students.begin(); it!=students.end(); ++it)
    {
        (*it).get_student();
        cout<<endl<<endl;
    }
}
template <typename T>
void Subject<T>::get_teacher()
{
    this->teacher.get_teacher();
}
template <typename T>
void Subject<T>::increase()
{
    for(vector<Student>::iterator it=this->students.begin(); it!=students.end(); ++it)
    {
        ++(*it);
    }
}
