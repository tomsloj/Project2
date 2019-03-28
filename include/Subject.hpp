#ifndef SUBJECT_H
#define SUBJECT_H
#include <vector>
#include <iostream>
#include "Student.hpp"
#include "Teacher.hpp"
template <typename T>
class Subject
{
private:
    std::string language;
    std::vector<Student> students;
    Teacher teacher;
    T amount;
public:
    Subject();
    void set_language(std::string);
    void add_student(std::string, std::string, std::string, int);
    void set_teacher(std::string, std::string, std::string, int);
    void get_language();
    void get_students();
    void get_teacher();
    void increase();
    T get_amount();
};
template <typename T>
Subject<T>::Subject()
{
    this->amount=0;
}
template <typename T>
void Subject<T>::set_language(std::string language)
{
    this->language=language;
}
template <typename T>
void Subject<T>::get_language()
{
    std::cout<<this->language;
}
template <typename T>
T Subject<T>::get_amount()
{
    return this->amount;
}
template <typename T>
void Subject<T>::set_teacher(std::string name, std::string surname, std::string academic_degree, int age)
{
    this->teacher.set_teacher(name,surname,academic_degree,age);
}
template <typename T>
void Subject<T>::add_student(std::string PESEL, std::string name, std::string surname, int IQ)
{
    Student stud;
    stud.set_student(PESEL,name,surname,IQ);
    this->students.push_back(stud);
    ++this->amount;
}
template <typename T>
void Subject<T>::get_students()
{
    std::cout<<"\n**********STUDENTS**********";
    for(std::vector<Student>::iterator it=this->students.begin(); it!=students.end(); ++it)
    {
        (*it).get_student();
        std::cout<<std::endl<<std::endl;
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
    for(std::vector<Student>::iterator it=this->students.begin(); it!=students.end(); ++it)
    {
        ++(*it);
    }
}
#endif
