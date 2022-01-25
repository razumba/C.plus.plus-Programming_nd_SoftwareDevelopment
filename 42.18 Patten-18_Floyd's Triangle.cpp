#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
//  ************* [ Pattern-18(FLOYD's TRIANGLE)] *****************
    int n,row,col,count;
    cout<<"Enter N= ";
    cin>>n;
    count=10;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        // These two loops will make Square Shape
        {cout<<" "<<++count;
        } cout<<"\n";
    }
    getch();
}
