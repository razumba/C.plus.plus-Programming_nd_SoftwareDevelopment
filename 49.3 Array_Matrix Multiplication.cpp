#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int A[10][10],B[10][10],result[10][10];
    int r1,r2,c1,c2,i,j,k,sum=0;
    cout<<"Enter rows and column for the first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter rows and column for the Second matrix: ";
    cin>>r2>>c2;

    while (c1!=r2)
    {
        cout<<"Error! Column of First matrix does not equal to second matrix.";
        cout<<"\nEnter rows and column for the first matrix: ";
        cin>>r1>>c1;
        cout<<"\nEnter rows and column for the Second matrix: ";
        cin>>r2>>c2;
    }
    // Taking input for the first matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>>A[i][j];
        }
        cout<<endl;
    }
    // Taking input for the Second matrix
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"B["<<i<<"]["<<j<<"]= ";
            cin>>B[i][j];
        }
        cout<<endl;
    }

    // Multiplying Matrix
    for(i=0; i<r1; i++) // for Row
    {
        for(j=0; j<c2; j++) // for Column
        {
            // for k values
            for(k=0; k<c1; k++)
            {
                sum=sum+(A[i][k]*B[k][j]);
            }

            result[i][j]=sum;
            sum=0;
        }
    }
    // Printing First matrix
    cout<<"\nFirst Matrix: "<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<"\t";
            cout<<A[i][j];
        }
        cout<<endl;
    }
    // Printing Second matrix
    cout<<"\nSecond Matrix: "<<endl;
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"\t";
            cout<<B[i][j];
        }
        cout<<endl;
    }
    // Printing Result matrix
    cout<<"\nResult Matrix: "<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"\t";
            cout<<result[i][j];
        }
        cout<<endl;
    }

    getch();
}
