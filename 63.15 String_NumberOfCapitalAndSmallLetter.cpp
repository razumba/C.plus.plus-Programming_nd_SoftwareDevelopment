#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstring>

using namespace std;
int main()
{

    char str[50],ch;
    int i,capital,small,digit;
    i=capital=small=digit=0;

    cout<<"Enter string: ";
    gets(str);

    while((ch=str[i])!='\0')
    {
        if(ch>=65 && ch<=90)  // ASC-II: 65=A and 90=Z
        {
            capital++;
        }
        else if (ch>=97 && ch<=122)  // ASC-II: 97=A and 122=Z
        {
            small ++;
        }
        else if (ch>=48 && ch<=57)  // ASC-II: 48=0 and 57=9
        {
            digit ++;
        }

        i++;
    }
     cout<<"Number of capital letter: "<<capital<<endl;
     cout<<"Number of small letter: "<<small<<endl;
     cout<<"Number of digits: "<<digit<<endl;

    getch();
}
