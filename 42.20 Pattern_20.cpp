#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
//  *********** [ Pattern-20(Quadrature)] ***************
    int n,row,col;
    cout<<"Enter N= ";
    cin>>n;
//  #########################################
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {cout<<" ";
        }// For Left triangle
        for(col=1; col<=row; col++)
        {cout<<col;
        }// For Right triangle
        for(col=row-1; col>=1; col--)
        {cout<<col;
        }

        cout<<"\n";
    }
//  #########################################
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {cout<<" ";
        }// For Left triangle
        for(col=1; col<=row; col++)
        {cout<<col;
        }// For Right triangle
        for(col=row-1; col>=1; col--)
        {cout<<col;
        }

        cout<<"\n";
    }
    getch();
}
