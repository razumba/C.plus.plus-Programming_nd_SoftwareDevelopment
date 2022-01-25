#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    double n1,n2,sum,a=1,b=2;

    cout<<"Enter two number: ";
    cin>>n1>>n2;
    sum=0;

    while (a<=n1 && b<=n2)
    {
        sum=sum+(a*b);
        a++,b++;
    }
    cout<<"Sum = "<<sum<<endl;
    getch();
}
