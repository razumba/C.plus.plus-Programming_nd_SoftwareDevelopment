#include<iostream>
#include<conio.h>
#include<cstring>
#include<stdio.h>

 using namespace std;

 int main()
 {
    // char message[7]={'H','E','L','L','O'};
    // char message[]={'H','E','L','L','O','\0'};
    //char message[]="Md Rezaul Karim";
    char Name[30];
    cout<<"Enter your Name: ";
    //cin>>Name;
    gets(Name);
    cout<<"Name = "<<Name<<endl;
    cout<<"Name[] = "<<Name[0]<<endl;


     getch();
 }
