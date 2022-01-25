#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
//   ########## Reverse of digits calculation ###########
     int num,temp,r,revers;

     cout<<"Enter A number: ";
     cin>>num;cout<<" "<<endl;

     temp=num; // Initialization of While Loop
     revers=0; // initialization of Sum variable.

     while(temp!=0)   // Condition of While Loop
     {
         r=temp%10;
         revers=(revers*10)+r;
         temp=temp/10;  // Increment or Decrement of While Loop

     }
     cout<<"Reverse of "<<num<<" is: "<<revers<<endl;

    getch();

}

