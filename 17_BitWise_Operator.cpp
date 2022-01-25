#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
int main()
{
//why Unary Operator: It can be used with only one variable
    int x,y,a,b;
    cout<<"Enter X:";
    cin>>x;

    b=-x; // Unary minus
    cout<<"Unary minus: "<<b<<endl;
    a=+x; // Unary plus
    cout<<"Unary plus: "<<a<<endl;

//Exactly we can do it for Decrement operator ((post or pre)--) too
    y=++x; //Pre-increment
    cout<<"Pre-increment Operator: "<<endl;
    cout<<setw(20)<<"After Increment: "<<y<<endl;
    cout<<setw(20)<<"Before increment: "<<x<<endl;

    y=x++; //post increment
    cout<<"Post Increment Operator: "<<endl;
    cout<<setw(20)<<"Before increment: "<<y<<endl;
    cout<<setw(20)<<"After Increment: "<<x<<endl;

    getch();

}

