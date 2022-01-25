#include<iostream>
#include<conio.h>
#include<cstring>  // header file for string

using namespace std;

int main()
{
    char str1[30]="miraK luazeR";
    char str2[30];
    int len=0,i,j;
    for(i=0; str1[i]!='\0';i++)
    {
        len++;
    }
    cout<<"Length: "<<len<<endl;

    for( j=0,i=len-1; i>=0; i-- , j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    cout<<"Reverse of \'miraK luazeR\' is : "<<str2;

    getch();

}
