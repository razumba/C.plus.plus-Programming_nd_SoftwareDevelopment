#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;

int main()
{
    time_t tstart, tend; // data type:
    tstart = time(0); // tic-- start
//  ######  Pattern_4  ###########
    int n,row,col;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(row=1;row<=n;row++)
    {   // printing space
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }  // printing column
        for(col=1;col<=row;col++)
        {
            //cout<<col;
            cout<<row;
            //cout<<"*";
            //cout<<"#";
//            char ch=row+64;
//            cout<<ch;
//            char ch=col+64;
//            cout<<ch;

//            cout<<row%2;
            //cout<<col%2;
        }
        cout<<"\n";
    }
    for(row=n-1;row>=1;row--)
    {   // printing space
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }  // printing column
        for(col=1;col<=row;col++)
        {
            //cout<<col;
            cout<<row;
            //cout<<"*";
            //cout<<"#";
//            char ch=row+64;
//            cout<<ch;
//            char ch=col+64;
//            cout<<ch;

//            cout<<row%2;
            //cout<<col%2;
        }
        cout<<"\n";
    }
    getch();
   //###############################################
    getch();
    tend = time(0); // toc--end
    cout << "It took "<< difftime(tend, tstart) <<" second_(s)."<< endl;
}
