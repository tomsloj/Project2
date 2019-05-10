#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human
{
    private:
        std::string PESEL;
        std::string name;
        std::string surname;
    
    public:
        Human ();
        Human ( std::string PESEL, std::string name, std::string surname );    
        
        std::string getPESEL ();
        std::string getName ();
        std::string getSurname ();

        void setPESEL ( std::string PESEL );
        void setName ( std::string name );
        void setSurname ( std::string surname );

        virtual void writePearson ();
};

#endif