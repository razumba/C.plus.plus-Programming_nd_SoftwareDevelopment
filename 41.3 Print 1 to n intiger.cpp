#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i,n;

    cout<<"Enter the last number: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cout<<i<<" + ";
    }
    getch();
}
