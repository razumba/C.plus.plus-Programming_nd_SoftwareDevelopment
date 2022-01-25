#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
class mobileUser
{//Abstract class
public:
    // Non-virtual function
    void call ()
    {
        cout<<"Hello"<<endl;
    }
    // Pure virtual function
    virtual void  sendMessage()=0;
};
class Rahim: public mobileUser
{
public:
    void sendMessage()
    {
        cout<<"This is Rahim."<<endl;
    }
};
class Karim: public mobileUser
{
public:
    void sendMessage()
    {
        cout<<"This is Karim."<<endl;
    }
};

int main()
{
    mobileUser *m;
    Rahim r;
    Karim k;

    m = &r;
    m->call();
    m -> sendMessage();

    m = &k;
    m -> sendMessage();

    getch();
}
