#include<iostream>
#include<conio.h>
#include<ctime>
 using namespace std;
 int main()
 {
     time_t tstart,tend;
     tstart=time(0);
//   ####### [Pattern_12] ########

     int n,row,col;
     cout<<"Enter the number of the rows: ";
     cin>>n;

     //  Pyramid_1
     for(row=1;row<=n;row++)
     {   // For space printing
         for(col=1;col<=n-row;col++)
         {cout<<" ";
         } // For * star printing
         for(col=1;col<=row;col++)
         {
             //cout<<"* ";
             //cout<<col<<" ";
             cout<<col%2<<" ";
         }cout<<"\n";
     }
     getch();
//   #############################
     tend=time(0);
     cout<<"It took"<<difftime(tend,tstart)<<" seconds." <<endl;
 }
