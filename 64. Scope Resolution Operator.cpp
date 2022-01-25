#include<iostream>
#include<conio.h>
#include<stdio.h>  // For,  gets() Function

using namespace std;
int x=20; // Global variable for all function
//void display()
//{
//     cout<<"Inside the display function: "<<x<<endl;
//}
//int main()
//{
//    int x=10; // Local variable
//    cout<<::x<<endl;
//    getch();
//}
int main()
{
    ::x=100;
// to change the value of global variable
    cout<<::x<<endl;
    getch();
}
