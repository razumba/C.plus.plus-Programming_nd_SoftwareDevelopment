#include<iostream>
#include<conio.h>
#include <ctime> // Header file: TO count time___equivalent to Matlab "tic-toc
using namespace std;

int main()
{
     time_t tstart, tend; // data type:
     tstart = time(0); // tic-- start
//######################################################
    int i=1;
    while (i<=10)
    {
        cout<<i<<". Bangladesh"<<endl;
        i++;
        // without it, code will run infinite time,
        //cause without increment 'i' won't reach till 10.
    }
    cout<<"The end of the \'while-Loop\'."<<endl;
    getch();
//###################################################
    tend = time(0); // toc--end
    cout << "It took "<< difftime(tend, tstart) <<" second(s)."<< endl;

}
