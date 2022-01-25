#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    int a,b,c,d,e,f,g;
    cout<<"Enter a and b: ";
    cin>>a>>b;
//And &
    c=a&b;
    cout<<"Bitwise And &: "<<c<<endl;
//OR |
    d=a|b;
    cout<<"Bitwise OR |: "<<d<<endl;
//X-OR ^
    e=a^b;
    cout<<"Bitwise X-OR: "<<e<<endl;
//right-shift >>
    f=a>>3;
    cout<<"Bitwise right-shift: "<<f<<endl;
//Left-shift <<
    g=a<<3;
    cout<<"Bitwise Left-shift: "<<g<<endl;

    getch();
}
