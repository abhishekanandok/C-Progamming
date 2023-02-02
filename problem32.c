#include<stdio.h>
#include<string.h>
//Write a program to remove blank spaces in a string

int main ()
{
    char blank[]="abhishek anand raja";
    int k=0;

    for (int i = 0; i < strlen(blank); i++)
    {
        if (blank[i]!=' ')
        {
            blank[k++]=blank[i];
        }
        
    }
    blank[k]='\0';

    printf("string after blank space removed : %s",blank);

    return 0;
}