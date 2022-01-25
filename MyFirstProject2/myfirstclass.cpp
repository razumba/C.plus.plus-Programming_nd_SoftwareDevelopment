//source file
#include "myfirstclass.h"
#include<iostream>
using namespace std;

//function's description/body write into Source file
// Scope Resolution operator :: to access member of the class
MyFirstClass::MyFirstClass() // className:: classMember
{
    cout<<"Inside the constructor."<<endl;
}

void MyFirstClass :: display()
{
    cout<<"Inside the Display Function"<<endl;
}
