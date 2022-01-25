#include<iostream>
#include<conio.h>

using namespace std;
//class declaration
class student
{
    public:
        int id;double gpa; // Member of Class
        void display()     // Function of the class
        {
            cout<<id<<" "<<gpa<<endl;
        }
        // To set value into variable id and GPA
        void setValue(int x,double y)
        {
            id=x;
            gpa=y;
        }

};

int main()
{
    student Alim, Karim;
    Alim.setValue(501,3.60);
    Alim.display();

    Karim.setValue(502,3.50);
    Karim.display();

    getch();
}
