#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double faren, cels;
    cout<<"Enter Celsius Entry: ";
    cin>>cels;

    faren=1.8*cels+32;

    cout<<"Fahrenheit: "<<faren<<endl;

    double faren_2, cels_2;
    cout<<"Enter Fahrenheit Entry: "<<endl;
    cin>>faren_2;
    cels_2=(faren_2-32)/1.8;
    cout<<"Celsius: "<<cels_2;

    getch();

}
