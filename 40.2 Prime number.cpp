#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
//   ###############################################
     int num,i,count=0;
     cout<<"Enter an integer: ";
     cin>>num;cout<<" "<<endl;

     for(i=2; i<num; i++)
     {if(num%i==0)
         {count++;
         cout<<"break"<<endl;
          break;
         }
     }if(count==0)
     {cout<<num<<" is a Prime Number."<<endl;
     }else
     {cout<<num<<" is not a Prime Number."<<endl;
     }

    getch();

}

