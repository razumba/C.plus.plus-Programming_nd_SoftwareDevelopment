#include<iostream>
#include<conio.h>
#include <ctime> // Header file: TO count time___equivalent to Matlab "tic-toc
using namespace std;

int main()
{
    time_t tstart, tend; // data type:
    tstart = time(0); // tic-- start

     while(1) // to keep condition always "True".
     {

     int num,i;
     cout<<"ENter an intiger: ";
     cin>>num;cout<<" "<<endl;
     cout<<"The Multiplication Table for: "<<num<<endl;

     for(i=1; i<=10; i++)
        {cout<<num<<"X"<<i<<"="<<(num*i)<<endl;
        }

     }
    getch();
//###################################################
    tend = time(0); // toc--end
    cout << "It took "<< difftime(tend, tstart) <<" second(s)."<< endl;

}

