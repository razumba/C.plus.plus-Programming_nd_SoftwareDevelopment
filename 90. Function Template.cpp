#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
template <class myTemplate>
myTemplate add(myTemplate a,myTemplate b)
{
    return a+b;
}

int main()
{
    cout<<"Sum of Integer type Data: "<<add(10,20)<<endl;
    cout<<"Sum of Double type Data: "<<add(10.5,20.57)<<endl;
    getch();
}
