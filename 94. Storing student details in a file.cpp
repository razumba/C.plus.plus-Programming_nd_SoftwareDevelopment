#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main()
{
    string name;
    int age;
    ofstream file;

    file.open("students_details.txt",ios::out|ios::app);
    for(int i=0; i<=3;i++)
    {
    cout<<"Enter your name: ";
    getline(cin,name);
    file<<name<<"\t";

    cout<<"Enter your Age: ";
    cin>>name;
    file<<age<<endl;
    // to take input again and again
    // to ignore character
    cin.ignore();
    }

    file.close();
    cout<<"Data is stored.";

 return 0;
}
