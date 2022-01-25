#include<iostream>
#include<conio.h>
using namespace std;

class student
{
     public:
        int id;    // Member of Class
        double gpa; // Member of class
} ;

int main()
{

    student Alim;
    Alim.id=101;
    Alim.gpa=3.44;

    student Karim;
    Karim.id=102;
    Karim.gpa=3.63;

    cout<<"Alim's Info:"<<"\n\tId: "<<Alim.id<<"\n\tGPA: "<<Alim.gpa;
    cout<<"\nKarim's Info:"<<"\n\tID: "<<Karim.id<<"\n\tGPA: "<<Karim.gpa;

    getch();
}
