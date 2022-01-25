#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
//   ########## Sum of digits calculation ###########
     int num,temp,r,sum;

     cout<<"Enter A number: ";
     cin>>num;cout<<" "<<endl;

     temp=num; // Initialization of While Loop
     sum=0; // initialization of Sum variable.

     while(temp!=0)   // Condition of While Loop
     {
         r=temp%10;
         sum=sum+r;
         temp=temp/10;  // Increment or Decrement of While Loop

     }
     cout<<"Sum of "<<num<<" is: "<<sum<<endl;

    getch();

}

