#include<iostream>
#include<conio.h>
#include<ctime>
 using namespace std;
 int main()
 {
     time_t tstart,tend;
     tstart=time(0);
//   ####### [Pattern_14] ########

     int n,row,col;
     cout<<"Enter the number of the rows: ";
     cin>>n;


     //  Diamond
    // Lower_Part of Pyramid
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
    // Lower_Part of Pyramid
     for(row=n-1;row>=1;row--)
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
