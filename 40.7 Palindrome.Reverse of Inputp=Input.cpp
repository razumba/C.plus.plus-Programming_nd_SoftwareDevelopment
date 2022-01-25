#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
//   ########## ArmStrong number checking ###########
     int num,temp,r,sum;

     cout<<"Enter A number: ";
     cin>>num;cout<<" "<<endl;

     temp=num; // Initialization of While Loop
     sum=0; // initialization of Sum variable.

     while(temp!=0)   // Condition of While Loop
     {
         r=temp%10;
         sum=sum+(r*r*r);
         temp=temp/10;  // Increment or Decrement of While Loop

     }
     if(num==sum)
    {
           cout<<num<<": is a ArmStrong number."<<endl;
    }
    else
    {
           cout<<num<<": is not a ArmStrong number."<<endl;
    }

    getch();

}

