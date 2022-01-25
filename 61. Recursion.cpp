#include<iostream>
#include<conio.h>
using namespace std;
// Recursion: Calling any function into function.
// We can do it by using Loop too.
int fact(int n)
{
    if(n==1)
    {return 1;
    }else
    {return n*fact(n-1);
    }
}

int main()
{
    int k;
    cout<<"Enter a number: ";cin>>k;
    int fatorial =fact(k);
    cout<<"Factorial of "<<k<<"= "<<fatorial;
    getch();
}
