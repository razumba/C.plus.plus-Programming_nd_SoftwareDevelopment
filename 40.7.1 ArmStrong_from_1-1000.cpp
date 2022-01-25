#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
//   ##### ArmStrong number checking(1 to 1000) ######
     int initialNum,finalNum,temp,i,r,sum;

     cout<<"Enter initialNum number: ";
     cin>>initialNum;cout<<" "<<endl;
     cout<<"Enter finalNum number: ";
     cin>>finalNum;cout<<" "<<endl;

     for(i=initialNum; i<=finalNum; i++)
     {
     temp=i; // Initialization of While Loop
     sum=0; // initialization of Sum variable.

     while(temp!=0)   // Condition of While Loop
     {
         r=temp%10;
         sum=sum+(r*r*r);
         temp=temp/10;  // Increment or Decrement of While Loop

     }
     if(i==sum)
    {
           cout<<i<<": is a ArmStrong number."<<endl;
    }

    }

    getch();

}

