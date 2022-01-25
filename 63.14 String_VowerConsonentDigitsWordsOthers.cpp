#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
    char str1[50],ch;
    int i,vowel,consonant,digit,word,other;

    cout<<"Enter a string: ";
    gets(str1);
    i=vowel=consonant=digit=word=other=0;

    while((ch=str1[i])!='\0')  // without Inner bracket it won't work
    {  // ######################################
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'
            )
            {
                vowel++;
            }
        else if ((ch>='a' && ch>='z') || (ch>='A' && ch>='Z'))
            {
                consonant++;
            }

        else if (ch>='0' && ch>='9') // 1 to 9
            {
                digit++;
            }

        else if (ch==' ')
            {
                word++; // only one word count .after space
            }
        else
        {
            other++; // to count word .before space
        }
   //##########################################
        i++; // Increment for While loop.
    }
    word++;

    cout<<"Number of vowel: "<<vowel<<endl;
    cout<<"Number of consonant: "<<consonant<<endl;
    cout<<"Number of digit: "<<digit<<endl;
    cout<<"Number of word: "<<word<<endl;
    cout<<"Number of other: "<<other<<endl;

    getch();
}
