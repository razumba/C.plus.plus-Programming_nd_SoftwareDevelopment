/*Learning outcomes :
1. Special operator
2. Comma operator
3. sizeof() operator*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()

{//Comma(,) Operator
    int a,b,c;
    c=(a=3,b=2,c=a+b);
    cout<<"Comma(,) Operator: "<<c<<endl;




//sizeof() operator
    float d;
    double e;
    char ch;
    char name[20];

    int i=sizeof(a);
    cout<<"sizeof() operator for Intezer: "<<i<<endl;
    int j=sizeof(d);
    cout<<"sizeof() operator for FLOAT: "<<j<<endl;
    int k=sizeof(e);
    cout<<"sizeof() operator for DOUBLE: "<<k<<endl;
    int l=sizeof(ch);
    cout<<"sizeof() operator for Single Character "<<l<<endl;
    int G=sizeof(name);
    cout<<"sizeof() operator for Multiple String: "<<G<<endl;

    getch();
}
