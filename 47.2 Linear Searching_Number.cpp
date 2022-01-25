#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int n;
    cout<<"How many Numbers: ";
    cin>>n;

    int array1[n],array2[n],i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<"st value: ";
        cin>>array1[i];
    }
    cout<<endl<<"Aray_1: ";
    for(i=0;i<n;i++)
    {cout<<array1[i]<<" ";
    }

    // Copy all the elements from array1 to array2
    for (i=0;i<n;i++)
    {array2[i]=array1[i];
    }
    cout<<"\nAray_2: ";
    for(i=0;i<n;i++)
    {cout<<array2[i]<<" ";
    }
    getch();
}
