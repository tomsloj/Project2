#ifndef SUBJECT_H
#define SUBJECT_H
#include "Student.h"
#include "Teacher.h"
#include <vector>
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
#endif
