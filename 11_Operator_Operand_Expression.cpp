#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
//    int num1=10, num2=3;
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>> num1>> num2;
    int sum=num1+num2;
    cout<<"Summation is: "<<sum;
    cout<<endl;

    int sub=num1 - num2;
    cout<<"Subtraction is: "<<sub;
    cout<<endl;

    int mul=num1 * num2;
    cout<<"Multiplication is: "<<mul;
    cout<<endl;

    int div=num1 / num2;
    cout<<"Division is: "<<div;
    cout<<endl;

    double div1 = (float)num1 / num2; // Type casting
    cout<<"Division_floating is: "<<div1<<endl;

    int rem = num1 % num2; // why it doesn't working
    cout<<"Remainder is: "<<sum;
    cout<<endl;



    getch();
}
