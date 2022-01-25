#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,num3,large;

    cout<<"Enter Three Number";
    cin>>num1>>num2>>num3;

    if (num1> num2 && num1 >num3)
    {
        large=num1;
//        cout<<"Large number is: "<<num1<<endl;
    }
    else if (num2> num1 && num2 >num3)
    {
        large=num2;
//        cout<<"Large number is: "<<num2<<endl;
    }
    else
    {
        large=num3;
//        cout<<"Large number is: "<<num3<<endl;

    }
    cout<<"Large number is: "<<large<<endl;
    getch();
}
