#include<iostream>
#include<conio.h>
#include<ctime>
//#inlude<iomanip> #### #showpoint#noshowpoint#fixed#precisionpoint #setw(40) #fixed
using namespace std;
int main()
{
    time_t tstart,tend;
    tstart=time(0);

    int year;

    cout<<"Enter a Year: ";
    cin>>year;
//    if ((year%4==0 && year%400!=0)||(year%400==0))
    if (year%4==0 && year%400!=0)
    {

        cout<<year <<": This is a Leap year."<<endl;
    }
    else if (year%400==0)
    {

        cout<<year <<": This is a Leap year."<<endl;
    }
    else
    {
        cout<<year <<": This is not a Leap year."<<endl;

    }
    getch();
     tend=time(0);
     cout<<"To work done,It takes "<<difftime(tend,tstart)<<" seconds."<<endl;
}
