#include<iostream>
#include<conio.h> //for getch; to not showing returned and execution time after build and debug
#include<iomanip> //input-output manipulation

using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter Two integer number: "<<endl;
    cin>> num1>>num2;

    cout<<"Hello Audience "<<endl;

//absolute

    if(num1<0)
    {
        cout<< -num1<<" : It is converted to absolute value" <<endl;

    }
    else
    {
        cout<<num1<<" : It was positive number."<<endl;

    }
//Pass-fail
//    if(num1>=40)
//    {
//        cout<<"This student is pass. "<<endl;
//
//    }
//    else
//    {
//        cout<<"This student is Fail. "<<endl;
//
//    }

// Larger_smaller
//    if(num1>num2){cout<<num1<<endl;}
//    else{cout<<num2<<endl;}

//Even-Odd
//    if(num1%2==0){cout<<num1<<" : This is Even."<<endl;}
//    else{cout<<num1<<" : This is Odd."<<endl;}
    getch();

}
