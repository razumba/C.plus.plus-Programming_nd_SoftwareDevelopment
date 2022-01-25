#include<iostream>
#include<conio.h> //for getch; to not showing end-line after build and debug
#include<iomanip> //input-output manipulation
#include<ctime>
using namespace std;

int main()
{
    time_t tstart,tend;
    tstart=time(0);

    int num;
    cout<<"Enter integer number: ";
    cin>> num;

    cout<<"Hello Audience "<<endl;

    if(num>0)

    {
        cout<<num<<" : This is Positive."<<endl;

    }
    if(num<0)
    {
        cout<<num<<" : This is Negative."<<endl;
    }
    if(num==0)
    {
        cout<<num<<" : This is Zero."<<endl;
    }
    getch();

    tend=time(0);
    cout<<"And, It took "<< difftime(tend,tstart)<<" seconds."<<endl;

}
