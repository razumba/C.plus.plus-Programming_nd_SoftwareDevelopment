#include<iostream>
#include<conio.h>
#include <ctime> // Header file: TO count time___equivalent to Matlab "tic-toc
using namespace std;

int main()
{
    time_t tstart, tend; // data type:
    tstart = time(0); // tic-- start

     int num,i,fact=1;

     cout<<"Enter an integer: ";
     cin>>num;cout<<" "<<endl;

     for(i=1; i<=num; i++)
        {fact=fact*i;
        }cout<<"Factorial of "<<num<<" ="<<fact<<endl;

    getch();
//###################################################
    tend = time(0); // toc--end
    cout << "It took "<< difftime(tend, tstart) <<" second(s)."<< endl;

}

