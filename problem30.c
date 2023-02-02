#include<stdio.h>
//Write a program to convert all lowercase vowels to uppercase in a string

int main ()
{
    char vowel[]="aeiou";

    for (int i = 0; vowel[i] != '\0'; i++)
    {
        vowel[i]=vowel[i]-32;
    }
    printf("%s",vowel);

    return 0;
    
}