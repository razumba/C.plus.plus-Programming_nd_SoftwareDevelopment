#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of Students: ";
    cin>>n;
    int i,sum=0,students[100];

    for(i=0;i<n;i++)
    {cout<<"Marks for Student ["<<i+1<<"]= ";
     cin>>students[i];
     sum=sum + students[i];
    }cout<<endl<<"Total Marks: "<<sum<<endl;
     float avg=(float)sum/n; // Type Casting
     cout<<"Average: "<<avg<<endl;

    // Maximum and Minimum
    int max =students[0];
    int min =students[0];
    for(i=1;i<n;i++)
    {
         if (max<students[i])
         {max=students[i];
         }if (min>students[i])
         {min=students[i];
         }
    }
    cout<<"Maximum Marks= "<<max<<endl;
    cout<<"Minimum Marks= "<<min<<endl;

    getch();
}
