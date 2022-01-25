#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char name[20];
    int num,num1,num2;
    cout<<"Please! Enter two integer value: ";
    cin>>num1>>num2;
    num=num1+num2;
    cout<<num<<endl;

    cout<<"Please! Enter your Name (Character value): ";
    cin>>name;
    cout<<"Name: "<<name<<endl;

    getch();
}
