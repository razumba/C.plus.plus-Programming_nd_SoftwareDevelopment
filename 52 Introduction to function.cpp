#include<iostream>
#include<conio.h>
 using namespace std;
 //function declaration
 void addition(int x,int y)
 {
     int sum;
     sum=x+y;
     cout<<"Summation= "<<sum<<endl;
 }

 int main()
 {
     //Function calling
     addition(10,10);
     addition(40,50);
     addition(1000,100);

     getch();
 }
