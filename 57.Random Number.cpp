#include<iostream>
#include<conio.h>
#include<stdlib.h> //for Random Function

 using namespace std;

 int main()
 {
     for(int i=1;i<=5;i++)
     {
//         int randomNumber=rand();   // Random function
//         int randomNumber=rand()%5;   //to covert Range:0 to 4(5-1)
         int randomNumber=rand()%5+1; // to covert Range:1 to 5
         cout<<"Random Number: "<<randomNumber<<endl;
     }

     getch();
 }

