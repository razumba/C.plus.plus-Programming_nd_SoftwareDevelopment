#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;

int main()
{
    time_t tstart, tend; // data type:
    tstart = time(0); // tic-- start
//  ######  Pattern_7  ###########
    int n,row,col;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(row=1;row<=n; row++)
    {
        for(col=1;col<=n;col++)
        {
            //cout<<" "<<col;
            //cout<<"* ";
            char ch=col+64;
            cout<<" "<<ch;
        }
        cout<<"\n";
    }
    getch();
   //###############################################
    getch();
    tend = time(0); // toc--end
    cout << "It took "<< difftime(tend, tstart) <<" second_(s)."<< endl;
}

