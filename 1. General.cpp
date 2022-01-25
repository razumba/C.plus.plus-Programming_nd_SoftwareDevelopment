#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;

int main()
{
    time_t tstart, tend; // data type:
    tstart = time(0); // tic-- start
//  ######  Pattern_3  ###########
    int n,row,col;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(row=1;row<=n; row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<col;
        }
        cout<<"\n";
    }

    for(row=n-1;row>=1; row--)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<col;
        }
        cout<<"\n";
    }
    getch();
   //###############################################
    getch();
    tend = time(0); // toc--end
    cout << "It took "<< difftime(tend, tstart) <<" second_(s)."<< endl;
}
