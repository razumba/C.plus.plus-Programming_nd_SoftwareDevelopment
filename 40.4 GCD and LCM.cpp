#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
//   ########## GCD & LCD calculation ###########
     int num1,num2,n1,n2,remainder,GCD,LCM;

     cout<<"Enter First integer: ";
     cin>>num1;
     cout<<"Enter Second integer: ";
     cin>>num2;cout<<" "<<endl;
     n1=num1;
     n2=num2; // Initialization of While Loop

     while(n2!=0)   // Condition of While Loop
     {
         remainder=n1%n2;
         n1=n2; // putting value of n2 into n1.
         n2=remainder;  // Increment or Decrement of While Loop
                        // putting value of remainder into n1.

     }
     GCD=n1;
     LCM=(num1*num2)/GCD;

     cout<<"GCD(Greatest Common divisor) of "<<num1<<" & "<<num2<<" is: "<<GCD<<endl;
     cout<<"LCM(Least Common Multiple) of "<<num1<<" & "<<num2<<" is: "<<LCM<<endl;

    getch();

}

