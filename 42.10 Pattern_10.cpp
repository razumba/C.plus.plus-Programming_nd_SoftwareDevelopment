#include<iostream>
#include<conio.h>
#include<ctime>
 using namespace std;
 int main()
 {
     time_t tstart,tend;
     tstart=time(0);
//   ####### [Pattern_10] ########

     int n,row,col;
     cout<<"Enter the number of the rows: ";
     cin>>n;
    // Reversed Pyramid_1
     for(row=n;row>=1;row--)
     {
         for(col=1;col<=n-row;col++)
         {cout<<" ";
         }
         for(col=1;col<=2*row-1;col++)
         {cout<<col;
         }cout<<"\n";
     }
     getch();
//   #############################
     tend=time(0);
     cout<<"It took"<<difftime(tend,tstart)<<" seconds." <<endl;
 }
