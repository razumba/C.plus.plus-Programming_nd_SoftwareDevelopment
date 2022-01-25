#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[10][10],B[10][10],C[10][10],D[10][10];
    int numberOfRows,numberOfColumn,row,col ;
    cout<<"Enter the number of rows and column: ";
    cin>>numberOfRows>>numberOfColumn;


// A Matrix
    cout<<"Enter the elements for the matrix: "<<endl;
    for( row=0; row<numberOfRows; row++)
    {
        for( col=0; col<numberOfColumn; col++)
        {
            cout<<"A["<<row<<"]["<<col<<"]= ";
            cin>>A[row][col];
        }
        cout<<endl;
    }
// B Matrix
    cout<<"\nEnter the elements for the matrix B: "<<endl;
    for( row=0; row<numberOfRows; row++)
    {
        for( col=0; col<numberOfColumn; col++)
        {
            cout<<"B["<<row<<"]["<<col<<"]= ";
            cin>>B[row][col];
        }
        cout<<endl;
    }
//Printing 2D Array
    cout<<"A: Matrix "<<endl;
    for(int row=0; row<numberOfRows; row++)
    {
        cout<<"\t";
        for( col=0; col<numberOfColumn; col++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }


//Printing 2D Array
    cout<<"B: Matrix "<<endl;
    for( row=0; row<numberOfRows; row++)
    {
        cout<<"\t";
        for( col=0; col<numberOfColumn; col++)
        {
            cout<<B[row][col]<<" ";
        }
        cout<<endl;
    }
//Adding the matrix A and B

    for( row=0; row<numberOfRows; row++)
    {
        for( col=0; col<numberOfColumn; col++)
        {
            C[row][col]=A[row][col]+B[row][col];
        }

    }
//Printing C Matrix Array
    cout<<"Matrix C = A+B "<<endl;
    for( row=0; row<numberOfRows; row++)
    {
        cout<<"\t";
        for( col=0; col<numberOfColumn; col++)
        {
            cout<<C[row][col]<<" ";
        }
        cout<<endl;
    }
//subtracting the matrix A from B

    for( row=0; row<numberOfRows; row++)
    {
        for( col=0; col<numberOfColumn; col++)
        {
            D[row][col]=A[row][col]-B[row][col];
        }

    }
//Printing D Matrix Array
    cout<<"Matrix D = A-B"<<endl;
    for( row=0; row<numberOfRows; row++)
    {
        cout<<"\t";
        for( col=0; col<numberOfColumn; col++)
        {
            cout<<D[row][col]<<" ";
        }
        cout<<endl;
    }
    getch();
}
