#include<iostream>
#include<conio.h>
// header file for string
#include<cstring>

using namespace std;

int main()
{
    char str1[50]="My Name is: ",str2[20]="Rezaul Karim";
    int len=0;
    for(int i=0; str1[i]!='\0';i++)
    {
        len++;
    }

    for(int j=0; str2[j]!='\0';j++)
    {
        str1[len+j]=str2[j];
    }
    cout << str1 <<endl;

}
