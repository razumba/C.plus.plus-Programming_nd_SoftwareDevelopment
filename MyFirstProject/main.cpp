//Main file
#include <iostream>
#include "myfirstclass.h"
#include<conio.h>

using namespace std;

int main()
{
    MyFirstClass obj1;
    // two was to call a function
//     obj1.display(); //(1) By object and (. operator)
     MyFirstClass *p=&obj1;
     p->display();

    getch();
}

