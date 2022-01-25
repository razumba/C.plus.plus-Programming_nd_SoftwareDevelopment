#include<iostream>
#include<conio.h>
// header file for string
#include<cstring>

using namespace std;

int main()
{
    char str[100]="gkhjgjkg jgjg";
    cout << "You entered: " << str<<endl;

    cout << "strlength(str)=" << strlen(str) <<endl;
    cout << "sizeof(str)=" << sizeof(str) <<endl;

//    string str ;
//    cout<<"Enter your Name: ";
//    cin>>str;
//
//    // 1. size of string object using size() method
//    int Size= str.size();
//    cout <<"Size: "<<Size<< endl;
//
//    // 2. size of string object using length() method
//    int Length=str.length();
//    cout <<"Length: "<<Length  << endl;

    getch();
}
