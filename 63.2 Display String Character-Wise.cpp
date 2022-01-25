#include<iostream>
#include<conio.h>
#include<stdio.h>  // For,  gets() Function

using namespace std;

int main()
{
    char name[20];
    cout<<"Enter your Name: ";
    //cin>>name;
    gets(name);

      for(int  i=0; name [i]!='\0';i++)
      {
          cout<<name[i]<<endl;

      }
     getch();
}
