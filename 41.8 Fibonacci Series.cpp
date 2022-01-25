#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,first=0,second=1,fibo,count=0;

    cout<<"Enter a range: ";
    cin>>n;
    while (count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        cout<<fibo<<" ";
        count++;
    }
        getch();
}
