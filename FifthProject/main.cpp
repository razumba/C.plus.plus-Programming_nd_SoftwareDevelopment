#include <iostream>
#include "myclassdemo.h"
using namespace std;

int main()
{// constant object can only call a constant function
 // located in header file and source file
    const MyClassDemo obj;
    obj.display1();
    // to solve this problem
    MyClassDemo obj1 ;
    obj1.display2();

    return 0;
}

