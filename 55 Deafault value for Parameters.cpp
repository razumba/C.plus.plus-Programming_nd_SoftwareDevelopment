
#include<iostream>
#include<conio.h>
 using namespace std;

 void display (double x=10.5,double y=10.4)
 {
     cout<<"X= "<<x<<endl;
     cout<<"Y= "<<y<<endl;
 }

 int main()
 {
     display();
     display(20);
     display(10.3232,10.2323);

     getch();
 }
