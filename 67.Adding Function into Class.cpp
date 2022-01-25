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
} ;

int main()
{

    student Alim,Karim;
    Alim.id=101;
    Alim.gpa=3.44;
    Alim.display();

    //student Karim;
    Karim.id=102;
    Karim.gpa=3.63;
    Karim.display();

    getch();
}
