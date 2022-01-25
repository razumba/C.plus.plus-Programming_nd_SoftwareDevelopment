#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    float num1,num2;

    cout<<"num1="; cin>>num1;
    cout<<"num2="; cin>>num2;

    cout<<showpoint; // by default 6 position
    cout<<fixed;     // it should be before setprecision
    cout<<setprecision(3); // 10 position including point
//    cout<<setprecision(3);


    float sum=num1+num2;
    cout<<setw(10) <<"sum= "<<sum<<endl;

//    cout<<noshowpoint;
    float sub=num1-num2;
    cout<<setw(10)<< "sub= "<<sub<<endl;

    float mul=num1*num2; //type casting: (double)num1
    cout<<setw(10)<< "mul= "<<mul<<endl;

    double div=num1/num2;
    cout<<setw(10)<< "div= "<<div<<endl;

//    float sum=num1+num2;
//    cout<< "sum= "<<sum;
    getch();
}
