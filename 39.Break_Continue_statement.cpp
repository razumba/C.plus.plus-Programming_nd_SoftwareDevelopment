#include<iostream>
#include<conio.h>
#include<iomanip>
#include <ctime> // Header file: TO count time___equivalent to Matlab "tic-toc
using namespace std;

int main()
{
    time_t tstart, tend; // data type:
    tstart = time(0); // tic-- start

    int iteration;

////######################################################
//    for(iteration=1; iteration<=50; iteration++)
//    {
//        if(iteration==10)
//        {
//            break;
//        }
//        cout<<setw(3)<<iteration<<". The BREAK of iteration by \'break-statement.\'."<<endl;
//    }
//
////  #################################################
//    for(iteration=1; iteration<=20; iteration++)
//    {
//        if(iteration==10)
//        {
//            continue;
//        }
//        cout<<setw(3)<<iteration<<". To skip or by-pass 10 only by \'Continue-statement\'."<<endl;
//    }
//   ###############################################
    for(iteration=1; iteration<=20; iteration=iteration+2)
    {
        if(iteration==10)
        {
            continue;
        }
        if(iteration>15)
        {
            break;
        }
        cout<<setw(3)<<iteration<<". To skip or by-pass 10 only and to break after 15 times iteration.."<<endl;
    }
    getch();
//###################################################
    tend = time(0); // toc--end
    cout << "It took "<< difftime(tend, tstart) <<" second(s)."<< endl;

}
