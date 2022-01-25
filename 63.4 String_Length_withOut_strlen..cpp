#include<iostream>
#include<conio.h>
// header file for string
#include<cstring>

using namespace std;

int main()
{
    char str[]="Rezaul Karim", target[20];

    strcpy(target,str);

    cout << "Source string = " << str<<endl;
    cout << "Target string = " << target<<endl;
}
