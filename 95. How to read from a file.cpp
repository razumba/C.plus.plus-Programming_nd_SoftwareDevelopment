#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main()
{
    string Line;
    ifstream file("students_details.txt");
    while(getline(file,Line))
    {
        cout<<Line<<endl;
    }
    file.close();

 return 0;
}
