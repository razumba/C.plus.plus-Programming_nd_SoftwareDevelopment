#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;

int main()
{
    char character;
    cout<<"Enter a Character : ";
    cin>> character;
    character=tolower(character);
    // to convert Upper_2_Lower case letter

    switch (character)
    {
//        case 'a':
//            cout<<"Vowel= "<<character;
//            break;
//        case 'e':
//            cout<<"Vowel= "<<character;
//            break;
//        case 'i':
//            cout<<"Vowel= "<<character;
//            break;
//        case 'o':
//            cout<<"Vowel= "<<character;
//            break;
//        case 'u':
//            cout<<"Vowel= "<<character;
//            break;
      // reason: all are showing by similar statement
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            character=toupper(character);
            cout<<"Vowel= "<<character;

            break;
        default:
            character=toupper(character);
            cout<<character<<" = This is Consonant.";
    }
getch();
}


