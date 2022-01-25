#include<iostream>
#include<conio.h>
#include<cstring>
#include<stdio.h>

 using namespace std;

 int main()
 {
     char name1[]="ReZaul ",name2[]="Karim";
     int d=strcmp(name1,name2);
     if(d==0)
     {
         cout<<"String are equal."<<endl;
     }
     else
     {
         cout<<"String are not equal."<<endl;
     }

//     strupr(name1);
//     cout<<"String Upper case Letter: "<<name1<<endl;
//
//     strlwr(name1);
//     cout<<"String Lower case Letter: "<<name1<<endl;

//     strcat(name1,name2);
//     cout<<"String Concatenation: "<<name1<<endl;

//     int len = strlen(name1);
//     cout<<"Length of String: "<<len<<endl;

//     strcpy(name1,name2);
//     cout<<"String Copy from Name2 into Name1: "<<name1<<endl;



     getch();
 }
