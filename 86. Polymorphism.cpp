#include<iostream>
#include<conio.h>
#include<string>

 using namespace std;
class person
{
    public:
        // Virtual:for calling super class by using point
        virtual void  display()
        {
            cout<<"I am Person."<<endl;
        }
};
class student: public person
{
        public:
        void  display()
        {
            cout<<"I am Student."<<endl;
        }
};
class Teacher: public person
{
        public:
        void  display()
        {
            cout<<"I am Teacher."<<endl;
        }
};
 int main()
 {
//     person p1;
//     p1.display();
//     student s1;
//     s1.display();
//     Teacher t1;
//     t1.display();

     person *p1;
     student s1;
     Teacher t1;

     p1 = &s1;
     p1 -> display();

     p1 = &t1;
     p1 -> display();

     getch();
 }
