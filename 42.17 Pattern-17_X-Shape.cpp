#include<iostream>
#include<conio.h>
#include<ctime>

using namespace std;

int main()
{
    time_t tstart,tend;
    tstart= time(0);
//  *************** [ Pattern-17(X-SHAPE)] *******************
    int n,row,col;
    cout<<"Enter N= ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        // These two loops will make Square Shape

        { if ( col== row || row+col==n+1)
            {cout<<"* ";
                //printf("*");
            } else
            {cout<<"  ";    // Two spaces
            //print(" ");
            }
        }
        cout<<"\n";
    }

    getch();
//  *********************************************************
    tend =time(0);
    cout<<"It took "<<difftime(tend,tstart)<<" Seconds."<<endl;
}
