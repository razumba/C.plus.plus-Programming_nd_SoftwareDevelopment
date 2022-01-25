//Returning a value from a function
#include<iostream>
#include<conio.h>
 using namespace std;
// // Prototype of the function
// int addition(int,int);
//
// int main()
// {
//     //Function calling
//     //Addition
//     int Sum=addition(10,10);
//     cout<<"Result: "<<Sum;
//     getch();
// }
// //function declaration
// int addition(int x,int y)
// {
//     int sum;
//     sum=x+y;
//     return sum;
// }
// //######################################
  // Prototype of the function
 double addition(double,double);

 int main()
 {
     //Function calling
     //Addition
//     double Sum=addition(10.5979,10.9076);
//     cout<<"Result: "<<Sum;

     cout<<"Result: "<<addition(10.5979,10.9076);
     getch();
 }
 //function declaration
 double addition(double x,double y)
 {
     double sum=x+y;
     return sum;
 }
