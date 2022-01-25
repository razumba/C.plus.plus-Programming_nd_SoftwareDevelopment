#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    double i,n,sum;

    cout<<"Enter the last number: ";
    cin>>n;
    sum=0;

    for(i=1; i<=n; i++)
    {
        sum=sum+(1/i);
        if(i==1)
        cout<<"1 + ";
        else if (i==n)
        cout<<"1/"<<i;
        else
        cout<<"1/"<<i<<" + ";
    }
    cout<<"= "<<sum<<endl;
    getch();
}
