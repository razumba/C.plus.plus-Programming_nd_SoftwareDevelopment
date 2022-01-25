#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    ch=tolower(ch); //library function
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"Entered character is a: "<<"Vowel"<<endl;
    }
    else
    {
        cout<<"Entered character is a: "<<"consonant"<<endl;
    }

    getch();
}
