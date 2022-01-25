#include<iostream>
#include<conio.h>
#include<cstring>  // header file for string

using namespace std;

int main()
{
    //char str1[50]="My Name is ",str2[20]="Rezaul Karim";
    char str1[50]="Rezaul Karim",str2[20]="Rezaul Karim";
    int d= strcmp(str1,str2);
    // If Both are Equal, Return d=0

    if (d==0)
    {
        cout<<"Both String are equal."<<endl;
    }
    else
    {
        cout<<"Both String are not equal."<<endl;
    }

}
