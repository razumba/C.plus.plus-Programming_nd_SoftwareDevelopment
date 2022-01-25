#include<iostream>
#include<conio.h>
#include<string>

 using namespace std;

class student
{
    public:
        string name;
        student (string name)
        {// "this-> " keyword for keeping both variable same
            this -> name=name;
        }
        void  display()
        {
            cout<< name<<endl;
        }
};
 int main()
 {
     student s1("Karim");
     s1.display();

     getch();
 }
