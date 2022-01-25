#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
class shape
{
public:
    double dim1,dim2;
    shape (double dim1, double dim2)
    {
        this ->  dim1=dim1;
        this ->  dim2=dim2;
    }
    // Virtual:for calling super class by using point
    virtual double  area()
    {
        return 0;
    }
};
class Triangle: public shape
{
    // dim1 ,dim2, area()
public:
    Triangle(double dim1, double dim2)
    : shape(dim1,dim2)
    {

    }
    double  area()
    {
        return 0.5*dim1*dim2;
    }
};
class Rectangle: public shape
{
    // dim1 ,dim2, area()
public:
    Rectangle(double dim1, double dim2)
    : shape(dim1,dim2)
    {

    }
    double  area()
    {
        return dim1*dim2;
    }
};

int main()
{
    shape *p;
    Triangle t(10,20);
    Rectangle r(10,20);

    p = &t;
    cout<<"Area of Triangle: "<<p -> area()<<endl;

    p = &r;
    cout<<"Area of Rectangle: "<<p -> area()<<endl;

    getch();
}
