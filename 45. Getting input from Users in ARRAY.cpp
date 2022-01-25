#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
//    // Declaration
//    int i,marks[5];
//    cout<<"Enter Students Marks: ";
//    cin>>marks[0];
//    cin>>marks[1];
//    cin>>marks[2];
//    cin>>marks[3];
//    cin>>marks[4];
//
//
//    for(i=0;i<5;i++)
//    {
//        cout<<"Students Marks ["<<i<<"]= ";
//        cout<<marks[i]<<endl;
//    }
    // Simplest way of taking_INPUT and Printing out OUTPUT
    int i,marks[5];
    cout<<"Enter Students Marks: "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"Marks for Student ["<<i+1<<"]= ";
        cin>>marks[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"Students Marks ["<<i+1<<"]= ";
        cout<<marks[i]<<endl;
    }


    getch();
}
