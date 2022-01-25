#include<iostream>
#include<conio.h>
// header file for string
#include<cstring>

using namespace std;

int main()
{
    char str[]="Rezaul Karim", str1[20]="My Name is: ";

    string striNg= strcat(str1,str);
    cout << striNg <<endl;
    cout << str1 <<endl;

}
