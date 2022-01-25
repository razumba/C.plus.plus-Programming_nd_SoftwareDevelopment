#include<iostream>
#include<conio.h>
#include <ctime> // Header file: TO count time___equivalent to Matlab "tic-toc
using namespace std;

int main()
{
    time_t tstart, tend; // data type:
    tstart = time(0); // tic-- start

//###### Pattern #######
    int n,row,col;
    cout<<"Enter number of Lines(ROw): ";
    cin>>n;cout<<" ";

    for(row=n;row>=1;row-=1)
    {
        for(col=1;col<=row;col+=1)
        {
// #Number Triangle
            //cout<<" "<<col;
            //cout<<" "<<row;
// #Character Triangle
            //cout<<"* ";
            //cout<<"# ";
// #Binary Triangle
            //cout<<" "<<col%2;
            //cout<<" "<<row%2;
        //# Capital Letter A B C D
            char ch= col+64;
            cout<<" "<<ch;

            //char ch= row+64;
            //cout<<" "<<ch;
        //# Small Letter a b c d e
            //char ch= col+96;
            //cout<<" "<<ch;

            //char ch= row+96;
            //cout<<" "<<ch;
        }
        cout<<"\n";
    }
//###############################################
    getch();
    tend = time(0); // toc--end
    cout << "It took "<< difftime(tend, tstart) <<" second_(s)."<< endl;
}
