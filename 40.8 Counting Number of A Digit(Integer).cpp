#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
//   ##### ANumber of Digits in an Integer ######
    int num,n1,count;

    cout<<"Enter integer number: ";
    cin>>num;
    cout<<" "<<endl;

    count=0; // initialization of Sum variable.
    n1=num;

    while(n1!=0)   // Condition of While Loop
    {
        n1=n1/10;
        ++count;// Increment or Decrement of While Loop
    }
    cout<<"Total number of digits in "<<num<<"= "<<count;

    getch();

}
