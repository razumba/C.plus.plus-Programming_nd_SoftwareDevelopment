#include<iostream>
#include<conio.h>
#include<iomanip> //input output manipulation

using namespace std;
int main()
{
    int x=3,y;
    cout<<"Enter y:";
    cin>>y;


    /*x+=y;
    cout<<setw(37)<<"Plus Assignment Operator: "<<x<<endl;
    */x-=y;
    cout<<setw(37)<<"Minus Assignment Operator: "<<x<<endl;
    /*x*=y;
    cout<<setw(37)<<"Multiplication Assignment Operator: "<<x<<endl;
    x/=y;
    cout<<setw(37)<<"Division Assignment Operator: "<<x<<endl;
    x%=y;
    cout<<setw(37)<<"Remainder Assignment Operator: "<<x<<endl;
*/
    getch();

}

