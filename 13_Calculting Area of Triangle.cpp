#include<iostream>
#include<conio.h> // for getch() --not to show return
#include<iomanip> // i/o manipulation

using namespace std;

int main()
{
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(3);

    cout<<"The Area of the Triangle"<<endl;
    double base, height;
    cout<<setw(33)<<"Enter Base: ";
    cin>>base;
    cout<<setw(33)<<"Enter height: ";
    cin>>height;
    double Area = (double)1/2*(base*height); //Type Casting
    cout<<setw(33)<<"The Area of the Triangle is: " <<Area<<endl;

    cout<<"Area of the Rectangle"<<endl;
    double w, h;
    cout<<setw(33)<<"Enter width: ";
    cin>>w;
    cout<<setw(33)<<"Enter height: ";
    cin>>h;

    double Area_rect = w*h;
    cout<<setw(33)<<"The Area of the Rectangle is: " <<Area_rect<<endl;
    getch();

}
