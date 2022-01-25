#include<iostream>
#include<conio.h>
 using namespace std;
 class student
 {
     public:
     const int admissionFee,examFee;
     int id;
     student(int x,int y,int z)
     :admissionFee(x),examFee(y) // constructor initializer
     {
//         admissionFee=x;
         cout<<"admission Fee: "<<admissionFee<<endl;
         cout<<"Exam Fee: "<<examFee<<endl;
         id=z;
         cout<<"ID: "<<id<<endl;

     }

 };

 int main()
 {
     student s1(15000,20000,301);

     getch();
 }
