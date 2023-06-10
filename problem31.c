#include <stdio.h>
#include <string.h>
// Write a program to print the highest frequency character in a string

int main()
{
    char str[100];
    int i, j, count, maxCount = 0;
    char maxChar, ch;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) //strlen = string length libary function
    {
        count = 1;
        ch = str[i];
        for (j = i + 1; j < strlen(str); j++)
        {
            if (str[j] == ch)
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxChar = ch;
        }
    }
    printf("Highest frequency character: %c\n", maxChar);
    printf("Frequency: %d", maxCount);
    return 0;
}