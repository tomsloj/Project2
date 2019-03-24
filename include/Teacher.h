#ifndef TEACHER_H
#define TEACHER_H
#include <string>
class Teacher
{
private:
    std::string *name;
    std::string *surname;
    std::string *academic_degree;
    int *age;
public:
    void set_teacher(std::string, std::string, std::string, int age);
    void get_teacher();
};
#endif

