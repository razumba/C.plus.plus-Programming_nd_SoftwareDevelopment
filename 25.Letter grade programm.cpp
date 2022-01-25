#include<iostream>
#include<conio.h> //for getch; to not showing end-line after build and debug
#include<iomanip> //input-output manipulation

using namespace std;

int main()
{
    int Mark;
    cout<<"Enter Mark number: ";
    cin>> Mark;

    cout<<" Hello Audience "<<endl;

    if(Mark>100)

    {
        cout<<Mark<<" : This is Invalid Number."<<endl;

    }
    else if(Mark<0)
    {
        cout<<Mark<<" : This is Invalid Number."<<endl;
    }
    else if(Mark>=80)
    {
        cout<<Mark<<" : He gets A+."<<endl;
    }
    else if(Mark>=70)
    {
        cout<<Mark<<" : He gets A."<<endl;
    }
    else if(Mark>=60)
    {
        cout<<Mark<<" : He gets A-"<<endl;
    }
    else if(Mark>=50)
    {
        cout<<Mark<<" : He gets B"<<endl;
    }
    else if(Mark>=40)
    {
        cout<<Mark<<" : He gets c."<<endl;
    }
    else if(Mark>=33)
    {
        cout<<Mark<<" : He gets Pass"<<endl;
    }
    else
    {
        cout<<Mark<<" : He is not succeeded."<<endl<<"Best of luck for the next time";
    }
    getch();

}
