#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,even=0,odd=0,result;
    cout<<"Enter a range of numbers: ";
    cin>>n;
    for (i=1; i<=n; i++)
    {
        if(i%2==0)
            even=even+i;
        else
            odd=odd+i;
    }
    result=odd-even;
    cout<<"Result = "<<result<<endl;
    getch();
}
