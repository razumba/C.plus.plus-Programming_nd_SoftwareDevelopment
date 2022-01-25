#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int A[10][10],transpose[10][10],row,col,i,j,k;

    cout<<"Enter Number of rows and column for the matrix: ";
    cin>>row>>col;

    // Taking input for the matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>>A[i][j];
        }
        cout<<endl;
    }
    // Transpose of that matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i]=A[i][j];
        }
        cout<<endl;
    }


    // Printing First matrix
    cout<<"\nFirst Matrix: "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"\t";
            cout<<A[i][j];
        }
        cout<<endl;
    }

    // Printing Transpose matrix
    cout<<"\nTranspose Matrix: "<<endl;
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            cout<<"\t";
            cout<<transpose[i][j];
        }
        cout<<endl;
    }



    getch();
}
