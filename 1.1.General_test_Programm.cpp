#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;

int main()
{
    time_t tstart,tend;
    tstart=time(0);
//  ################################################
//  Large-number and pass-fail

    int num1,num2,Max;
    cout<<"Enter first Integer number: ";
    cin>> num1;
    cout<<"Enter Second Integer number: ";
    cin>> num2;
    cout<<"Hello Audience "<<endl;

//  Large-number
    Max=(num1>num2)?num1:num2;
    cout<<"Maximum number is : "<<Max<<endl;

//  even-odd

    (num1%2==0) ? cout<<num1<<" : This is even number. "<<endl :  cout<<num1<<" : This is odd number: "<<endl ;


    getch();
    //  ################################################
    tend=time(0);
    cout<<"To work done,It takes "<<difftime(tend,tstart)<<" seconds."<<endl;
    }


