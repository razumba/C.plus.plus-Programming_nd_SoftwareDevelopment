#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
int main()
{
//    int num1=10, num2=3;
    float num1, num2;
    cout<<"Enter two numbers: ";
    cin>> num1>> num2;
// Formating output
    cout<<showpoint;
//    cout<<noshowpoint;
//    cout<<setprecision(8); // it shows 6 position without point (.)
    cout<<fixed; // to show certain position after point(.)
    cout<<setprecision(5);

    float sum=num1+num2;
    cout<<setw(20)<<"Summation is: "<<sum; // setw (Set Width for string , to equal distance)
    cout<<endl;

    float sub=num1 - num2;
    cout<<setw(20)<<"Subtraction is: "<<sub;
    cout<<endl;

    float mul=num1 * num2;
    cout<<setw(20)<<"Multiplication is: "<<mul;
    cout<<endl;

    float div=num1 / num2;
    cout<<setw(20)<<"Division is: "<<div;
    cout<<endl;

// It does not work for remainder
//     float rem = num1 % num2; // why it doesn't working
////    cout<<"Remainder is: "<<sum;
//    cout<<endl;



    getch();
}
