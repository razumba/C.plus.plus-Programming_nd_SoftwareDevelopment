#include<iostream>
#include<conio.h>
#include <ctime> // Header file: TO count time___equivalent to Matlab "tic-toc
using namespace std;

int main()
{
    time_t tstart, tend; // data type:
    tstart = time(0); // tic-- start

//###### Pattern_3 #######
    int n,row,col;
    cout<<"Enter number of Lines(ROw): ";
    cin>>n;cout<<" ";

    for(row=1;row<=n;row+=1)
    {for(col=1;col<=row;col+=1)
        {
            //cout<<" "<<col;
            //cout<<" "<<row;
            //cout<<" "<<row%2;
            //char ch=col+64;
            //cout<<" "<< ch;
            cout<<"* ";

        }cout<<"\n";
    }
    for(row=n-1;row>=1;row-=1)
    {for(col=1;col<=row;col+=1)
        {
            //cout<<" "<<col;
            //cout<<" "<<row;
            //cout<<" "<<row%2;
            //char ch=col+64;
            //cout<<" "<<ch;
            cout<<"* ";
        }cout<<"\n";
    }
//###############################################
    getch();
    tend = time(0); // toc--end
    cout << "It took "<< difftime(tend, tstart) <<" second_(s)."<< endl;
}
