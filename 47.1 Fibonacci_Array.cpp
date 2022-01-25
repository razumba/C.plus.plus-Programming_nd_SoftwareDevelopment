#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of Size of Fibonacci : ";
    cin>>n;
    int i,a[n];

    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {//Formula for Fibonacci for
        a[i]=a[i-1]+a[i-2];
    }
    cout<<"\n";
    // Printing Output
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    getch();
}
