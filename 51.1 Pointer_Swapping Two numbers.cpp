#include<iostream>
#include<conio.h>
 using namespace std;
 int main()
 {
     int x=5,y=10,temp;
     int *p_x,*p_y;

     p_x=&x;
     p_y=&y;
// Swapping
     temp=*p_x;
     *p_x=*p_y;
     *p_y=temp;
     cout<<"X= "<<x<<endl;
     cout<<"Y= "<<y;
     getch();
 }
