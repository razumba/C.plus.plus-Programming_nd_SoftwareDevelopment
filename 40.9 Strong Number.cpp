#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
//   ########## Strong Number calculation ###########
     int num,temp,r,sum,i,fact;

     cout<<"Enter A number: ";
     cin>>num;cout<<" "<<endl;

     temp=num; // Initialization of While Loop
     sum=0; // initialization of Sum variable.464

     while(temp!=0)   // Condition of While Loop
     {
         r=temp%10;
      // Factorial of temp
         fact=1;
         for(i=1;i<=r;i++)
         {fact=fact*i;
         }
         sum=sum+fact;
         temp=temp/10;  // Increment or Decrement of While Loop

     }if (num==sum)
     cout<<num<<" is a strong Number."<<endl;
     else
        cout<<num<<" is not a strong Number."<<endl;
     getch();
}
