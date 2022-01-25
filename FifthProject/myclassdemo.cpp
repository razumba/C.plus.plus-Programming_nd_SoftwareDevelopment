#include "myclassdemo.h"
#include <iostream>

using namespace std;
void MyClassDemo::display1() const
{
    cout<<"Inside constant function."<<endl;
}
void MyClassDemo::display2()
{
    cout<<"Inside Non-constant function."<<endl;
}
