#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[3][4],B[3][4];
// A Matrix
    cout<<"Enter the elements for the matrix: "<<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cout<<"A["<<row<<"]["<<col<<"]= ";
            cin>>A[row][col];
        }
        cout<<endl;
    }

//Printing 2D Array
    cout<<"A: Matrix "<<endl;
    for(int row=0; row<3; row++)
    {
        cout<<"\t";
        for(int col=0; col<4; col++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }
// B Matrix
    cout<<"Enter the elements for the matrix B: "<<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cout<<"B["<<row<<"]["<<col<<"]= ";
            cin>>B[row][col];
        }
        cout<<endl;
    }

//Printing 2D Array
    cout<<"B: Matrix "<<endl;
    for(int row=0; row<3; row++)
    {
        cout<<"\t";
        for(int col=0; col<4; col++)
        {
            cout<<B[row][col]<<" ";
        }
        cout<<endl;
    }
    getch();
}
