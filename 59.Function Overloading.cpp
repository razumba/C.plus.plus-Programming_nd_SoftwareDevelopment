#include<iostream>
#include<conio.h>
using namespace std;
void sum(int x, int y)
{
    int add=x+y;
    cout<<"Sum of Two Parameters: "<<add<<endl;

}
void sum(int x, int y,int z)
{
    int add=x+y+z;
    cout<<"Sum of Three Parameters: "<<add<<endl;

}
int main()
{
    sum(10,20);
    sum(10,20,30);
    getch();
}
