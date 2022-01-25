#include<iostream>
#include<conio.h>
 using namespace std;
 // Prototype of the function
 void addition(int,int);
 void subtraction(int,int);
 void multiplication(int,int);
 void division(int,int);

 int main()
 {
     //Function calling
     //Addition
     addition(10,10);
     addition(40,50);

     //Subtraction
     subtraction(400,50);
     subtraction(1000,100);
     //division
     division(400,50);
     division(1000,100);
     //multiplication
     multiplication(400,50);
     multiplication(1000,100);

     getch();
 }
 //function declaration
 void addition(int x,int y)
 {
     int sum;
     sum=x+y;
     cout<<"Summation= "<<sum<<endl;
 }
  void subtraction(int x,int y)
 {
     int sub;
     sub=x-y;
     cout<<"Subtraction= "<<sub<<endl;
 }
   void multiplication(int x,int y)
 {
     int mul;
     mul=x*y;
     cout<<"multiplication= "<<mul<<endl;
 }
   void division(int x,int y)
 {
     float div;
     div=(float)x/y;
     cout<<"division= "<<div<<endl;
 }
