#include<iostream>
#include<conio.h> //for getch; to not showing end-line after build and debug
#include<iomanip> //input-output manipulation

using namespace std;

int main()
{
    int num;
    cout<<"Enter integer number: ";
    cin>> num;

    cout<<" Hello Audience "<<endl;

    if(num>0)

    {
        cout<<num<<" : This is Positive."<<endl;

    }
    else if(num<0)
    {
        cout<<num<<" : This is Negative."<<endl;
    }
    else
    {
        cout<<num<<" : This is Zero."<<endl;
    }
    getch();

}
