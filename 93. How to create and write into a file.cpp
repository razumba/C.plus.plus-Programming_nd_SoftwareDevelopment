#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main()
{
    string name;
    ofstream file;
    file.open("student.txt",ios::out|ios::app);
    cout<<"Enter your name: ";
    getline(cin,name);
    file<<"Welcome! "<<name<<endl;
    file.close();

    cout<<"Data is stored.";

 return 0;
}
