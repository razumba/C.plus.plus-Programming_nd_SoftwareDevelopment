#include<iostream>
#include<conio.h>
#include<stdio.h>  // For,  gets() Function

using namespace std;

int main()
{
    char name[20];
    cout<<"Enter your Name: ";
//    cin>>name;
      gets(name); // Needs Header File from C-Program

     cout<<"Welcome! "<<name<<endl;
     getch();
}
