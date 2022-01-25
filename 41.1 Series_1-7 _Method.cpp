#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>                     //Mathematical function
#include <ctime>                    // Header file: TO count time___equivalent to Matlab "tic-toc
using namespace std;

int main()
{
    time_t tstart, tend;             // data type
    tstart = time(0);                // tic-- start

//###### un-comment according to Number #######
    int n;
    float i,sum;
    cout<<"Enter the last number: ";
    cin>>n;

    sum=0;
  //  for(i=1; i<=n; i++)             //Sum of n integer(1)
  //  for(i=2; i<=n; i+=2)            //Sum of even integer (1)
  //  for(i=1; i<=n; i+=2)            //Sum of odd integer(1)
  //  for( i=1; i<=n; i+=1)           //Sum of squared integer(2)
  //    for( i=1; i<=n; i+=1)         //Sum of cubic integer(3)
      for( i=1; i<=n; i+=1)           //Sum of cubic integer(4)


    {
        // sum+=i;                     //sum=sum+i; (1)
        //sum=sum+i*i*i;               //sum=sum+i;(2)
        //sum=sum+i*i*i;               //sum=sum+i;(3)
        sum=sum+pow(i,5);              //sum=sum+i;(4); Here, pow(base,power)

    }
    cout<<setw(22)<<"The sum of n integer: "<<sum<<endl;
//###############################################
    getch();
    tend = time(0);                        // toc--end
    cout << "It took "<< difftime(tend, tstart) <<" second(s)."<< endl;

}
