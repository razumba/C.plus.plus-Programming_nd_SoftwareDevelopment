#include<iostream>
#include<conio.h>
//#inlude<iomanip> #### #showpoint#noshowpoint#fixed#precisionpoint #setw(40) #fixed
#include<ctime>
using namespace std;

int main()
{
    time_t tstart,tend;
    tstart=time(0);
//  ################################################
    int Mark;
    cout<<"Enter Mark number: ";
    cin>> Mark;
    cout<<" Hello Audience "<<endl;

    if(Mark>100 || Mark<0)

    {cout<<Mark<<" : This is Invalid Number."<<endl;
    }else
    {
        if (Mark>32)
        {
            if(Mark>=80)
            {cout<<Mark<<" : He gets A+."<<endl;
            }else if(Mark>=70)
            {cout<<Mark<<" : He gets A."<<endl;
            }else if(Mark>=60)
            {cout<<Mark<<" : He gets A-"<<endl;
            }else if(Mark>=50)
            {cout<<Mark<<" : He gets B"<<endl;
            }else if(Mark>=40)
            {cout<<Mark<<" : He gets c."<<endl;
            }else if(Mark>=33)
            {cout<<Mark<<" : He gets Pass"<<endl;
            }
        }else
        {cout<<"Not succeeded."<<endl;
         cout<<"Best of luck for the next time. "<<endl;
        }
    }
    getch();
    //  ################################################
    tend=time(0);
    cout<<"To work done,It takes "<<difftime(tend,tstart)<<" seconds."<<endl;
    }
