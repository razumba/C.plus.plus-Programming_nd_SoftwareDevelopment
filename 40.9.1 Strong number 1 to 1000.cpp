#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
//   ########## Strong Number calculation ###########
    int initialNum,finalNum,temp,r,sum,i,fact,k;


    cout<<"Enter initialNum number: ";
    cin>>initialNum;
    cout<<"Enter finalNum number: ";
    cin>>finalNum;cout<<" "<<endl;

    for(i=initialNum; i<=finalNum; i++)
    {  /* Number to check for strong number */
        temp=i; // Initialization of While Loop
        sum=0; // initialization of Sum variable.464

         /* Find the sum of factorial of digits */
        while(temp!=0)   // Condition of While Loop
        {
            r=temp%10;
            // Factorial of temp
            fact=1;
            for(k=1; k<=r; k++)
            {
                fact=fact*k;
            }
            sum+=fact;
            temp/=10;  // Increment or Decrement of While Loop

        }
        if (i==sum)
            cout<<i<<" is a strong Number."<<endl;
    }
    getch();
}
