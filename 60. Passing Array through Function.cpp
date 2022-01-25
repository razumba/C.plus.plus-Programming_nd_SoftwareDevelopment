#include<iostream>
#include<conio.h>
using namespace std;

void displayArray(int num[], int arraySize)
{
    cout<<"Number["<<arraySize<<"]= ";
    for (int i=0; i<arraySize; i++)
    {
        cout<<num[i]<<" ";
    }
}

int main()
{
    int number[6]={10,20,30,40,50,60};
    displayArray(number,6);
    getch();
}
