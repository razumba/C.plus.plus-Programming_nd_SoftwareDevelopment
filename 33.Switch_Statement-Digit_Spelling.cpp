#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;

int main()
{


    int digit;
    cout<<"Enter a digit: ";
    cin>> digit;

    switch (digit)
    {
        case 0:
            cout<<"Zero"<<digit;
            break;
        case 1:
            cout<<"One= "<<digit;
            break;

        case 2:
            cout<<"Two= "<<digit;
            break;
        case 3:
            cout<<"Three= "<<digit;
            break;
        case 4:
            cout<<"Four= "<<digit;
            break;
        case 5:
            cout<<"Five= "<<digit;
            break;

        case 6:
            cout<<"Six= "<<digit;
            break;
        case 7:
            cout<<"Seven= "<<digit;
            break;
        case 8:
            cout<<"Eight= "<<digit;
            break;
        case 9:
            cout<<"Nine= "<<digit;
            break;
        default:
            cout<<digit<<" = This not a digit..";
    }
getch();
}


