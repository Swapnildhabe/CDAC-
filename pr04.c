//1.WAP to enter a character from user and check whether it is vowel or consonants.

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any Charator ::");
    scanf("%c",&ch);

    if(ch=='a'|| ch=='e'|| ch=='i'||  ch=='o'|| ch=='u'||  ch=='A'||  ch=='E'||  ch=='I'|| ch=='O'|| ch=='U' )
    {
        printf("You Enter Charator is Vowel");
    }

    else if(ch > 'a'&& ch < 'z' || ch > 'A' && ch < 'Z')
    {
        printf("Youre Charator is Consonant");
    }

    else 
        printf("%c is not Alphabet",ch);
}