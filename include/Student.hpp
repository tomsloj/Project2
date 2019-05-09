#ifndef STUDENT_H
#define STUDENT_H

#include <string>

#include "Human.hpp"

class Student : public Human
{
    private:
        int IQ;
    
    public:
        void set_student(std::string, std::string, std::string, int);
        void get_student();
        void operator++();
        int getIQ();
};

#endif