#include<iostream>
#include<conio.h>
using namespace std;
//// Pass by value
//void display(int num)
//{
//    num= 20;
//}
//
//int main()
//{
//    int x=10;
//    cout<<"Before calling the function: "<<x<<endl;
//    display(x);
//     cout<<"After calling the function: "<<x<<endl;
//     getch();
//}

// Pass by reference
void display(int *num)
{
    *num= 20;
}

int main()
{
    int x=10;
    cout<<"Before calling the function: "<<x<<endl;
    display(&x);
     cout<<"After calling the function: "<<x<<endl;
     getch();
}
