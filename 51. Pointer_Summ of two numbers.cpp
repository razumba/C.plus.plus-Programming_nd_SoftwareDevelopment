#include<iostream>
#include<conio.h>
 using namespace std;
 int main()
 {
     int x=5,y=10,sum;
     int *p_x,*p_y;

     p_x=&x;
     p_y=&y;
     sum=*p_x+*p_y;

     cout<<"Addition between x and y:"<<endl;
     cout<<"Sum= "<<sum;


     getch();
 }
