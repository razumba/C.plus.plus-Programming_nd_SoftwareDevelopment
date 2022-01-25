#include<iostream>
#include<conio.h>
#include<cstdlib> //for Random Function

using namespace std;

int main()
{
    while(1) // To do again and again ,condition is true always
    {
        int guessNumber,randomNumber;
        cout<<"Enter your guess inbetween 1 to 5: ";
        cin>>guessNumber;

        randomNumber=rand()%5+1; // to covert Range:1 to 5
        if(guessNumber==randomNumber)
        {
            cout<<"You have won."<<endl<<endl;
        }
        else
        {
            cout<<"You have lost.Try Again!"<<endl;
            cout<<"Random Number was= "<<randomNumber<<endl;
        }
    }
    getch();
}
