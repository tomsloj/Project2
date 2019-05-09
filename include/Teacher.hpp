#ifndef TEACHER_H
#define TEACHER_H

#include <string>

#include "Human.hpp"

class Teacher : public Human
{
    private:       
        std::string *academic_degree;
        int *age;

    public:
        Teacher();
        ~Teacher();
        void set_teacher(std::string, std::string, std::string, int age);
        void get_teacher();
        void get_teacher(std::string);
};

#endif