#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    double n,i=1,result=1;

    cout<<"Enter a number: ";
    cin>>n;
    while (i<=n)
    {
        //result=result*i;   // for 1*2*3*4*....*n
        result=result*i*i;  // for 1^2*2^2*3^2*4^2*....*n2
        i++;
    }
    cout<<"Result of mul = "<<result<<endl;
    getch();
}
