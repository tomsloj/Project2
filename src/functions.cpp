#include <iostream>

#include "Subject.hpp"
#include "functions.hpp"

using namespace std;

//1 & 4 checked


void menu()
{
    Subject<unsigned int> sub1;
    while(1)
    {
        int choice;
        cout<<"\n**********MENU**********";
        cout<<"\n1.Set language\n2.Add student\n3.Set teacher\n4.Get language\n5.Get teacher\n6.Get students\n7.Increase IQ\n8.Get amount of students\n9.Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                string language;
                cout<<"\ntype a language:";
                cin>>language;
                sub1.set_language(language);
                break;
            }
            case 2:
            {
                string PESEL, name, surname;
                int IQ;
                cout<<"\ntype PESEL:";
                cin>>PESEL;
                cout<<"\ntype name:";
                cin>>name;
                cout<<"\ntype surname:";
                cin>>surname;
                cout<<"type IQ:";
                cin>>IQ;
                try
                {
                    sub1.add_student(PESEL,name,surname,IQ);
                }
                catch( string e )
                {
                    cout << "\nSTOP " << e << "\n";
                    cout << "STUDENT CANNOT BE ADD\N";
                }
                break;
            }
            case 3:
            {
                string degree, name, surname;
                int age;
                cout<<"\ntype academic degree:";
                cin>>degree;
                cout<<"\ntype name:";
                cin>>name;
                cout<<"\ntype surname:";
                cin>>surname;
                cout<<"type age:";
                cin>>age;
                sub1.set_teacher(name,surname,degree,age);
                break;
            }
            case 4:
                sub1.get_language();
                break;
            case 5:
                try 
                {
                    sub1.get_teacher();
                }
                catch(string e)
                {
                    cout << "\nSTOP " << e;
                }
                break;
            case 6:
                sub1.get_students();
                break;
            case 7:
                sub1.increase();
                break;
            case 8:
                cout<<sub1.get_amount();
                break;
            case 9:
                return;
            default:
                cout<<"unkown command";
                break;
        }
    }
}