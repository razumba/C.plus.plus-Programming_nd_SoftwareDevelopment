#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i,n,sum;

    cout<<"Enter the last number: ";
    cin>>n;
    sum=0;

    for(i=1; i<=n; i++)
    {
        sum=sum+i*i;
    }
    cout<<"The sum of n^2 integer: "<<sum<<endl;
    getch();
}
