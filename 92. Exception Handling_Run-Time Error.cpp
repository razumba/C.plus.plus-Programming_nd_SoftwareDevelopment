#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
int main()
{
    while(1)
    {
        try
        {
            int num1,num2;
            cout<<"Enter first number: ";
            cin>>num1;
            cout<<"Enter second number: ";
            cin>>num2;

            if(num2==0)
            {
                throw 0;
            }

            double result= (double) num1/num2;
            cout<<"Result: "<<result<<endl;
        }// multiple catch block possible
        catch (int x)
            // catch (...)
        {
            cout<<"Divide by zero is not possible."<<endl;
            cout<<"Try again."<<endl;
        }
    }

    getch();

}
