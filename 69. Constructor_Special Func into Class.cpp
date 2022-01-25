#include<iostream>
#include<conio.h>
using namespace std;

class student
{
     public:
        int id;    // Member of Class
        double gpa; // Member of class
        void display() // Function of the classj
        {
            cout<<id<<" "<<gpa<<endl;
        }
     // Default Constructor
        student()
        {
            cout<<"Hello! Student of Class-XII."<<endl;
        }
     // Parameterized Constructor
        student(int x,double y)
        {
            id=x;
            gpa=y;
        }
} ;

int main()
{
    student STUD;
    student Alim(101,3.50);
    Alim.display();

    student Karim(102, 3.60);
    Karim.display();

    getch();
}
