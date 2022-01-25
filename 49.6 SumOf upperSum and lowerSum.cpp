// SumOf upperSum and lowerSum Triangle from a matrix
//-----------------------------------------------
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int A[10][10],row,col,i,j,upperSum=0,lowerSum=0;

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
// Printing That matrix
    cout<<"\nMatrix: "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"\t";
            cout<<A[i][j];
        }
        cout<<endl;
    }

    // SumOf upperSum and lowerSum Triangle elements
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if (i<j)
            {
                upperSum = upperSum + A[i][j];
            }
            if(i>j)
            {
                lowerSum = lowerSum + A[i][j];
            }
        }
    }
    cout<<"\nSum of Upper Triangle elements: "<<upperSum;
    cout<<"\nSum of Lower Triangle elements: "<<lowerSum;
    getch();
}
