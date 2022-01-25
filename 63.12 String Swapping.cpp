#include<iostream>
#include<conio.h>
#include<cstring>  // header file for string

using namespace std;

int main()
{
    char str1[20]="AMMA",str2[20]="Sister-in-Law",temp[20];
    cout<<"Before swapping."<<endl;
    cout<<"\t\tstr1 : "<<str1<<endl;
    cout<<"\t\tstr2 : "<<str2<<endl;
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    cout<<"After swapping."<<endl;
    cout<<"\t\tstr1 : "<<str1<<endl;
    cout<<"\t\tstr2 : "<<str2;

    getch();

}
