#include<iostream>
#include<conio.h>
#include<string>


 using namespace std;

 int main()
 {
     string str1="MD REZAUL";
     string str2=" KARIM",str3;
     str3=str1;
     cout<<"Copy from str1 to str3: "<< str3<<endl;

     str3=str1+ str2;
     cout<<"str1 + str2= "<< str3<<endl;

     int len=str1.size();
     cout<<"str1 size= "<< len<<endl;

     getch();
 }
