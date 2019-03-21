#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student
{
private:
    std::string PESEL;
    std::string name;
    std::string surname;
    int IQ;
public:
    void set_student(std::string, std::string, std::string, int);
    void get_student();
    void operator++();
};
#endif
