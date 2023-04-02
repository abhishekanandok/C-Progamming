#include <stdio.h>

// Function to convert a digit to its corresponding word
void digitToWord(int digit)
{
    switch (digit)
    {
    case 0:
        printf("zero \t");
        break;
    case 1:
        printf("one \t");
        break;
    case 2:
        printf("two \t");
        break;
    case 3:
        printf("three \t");
        break;
    case 4:
        printf("four \t");
        break;
    case 5:
        printf("five \t");
        break;
    case 6:
        printf("six \t");
        break;
    case 7:
        printf("seven \t");
        break;
    case 8:
        printf("eight \t");
        break;
    case 9:
        printf("nine \t");
        break;
    }
}

int main()
{
    int num, digit, rev_num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0)
    {
        digit = num % 10;
        rev_num = rev_num * 10 + digit;
        num /= 10;
    }

    // Convert each digit to its corresponding word
    while (rev_num != 0)
    {
        digit = rev_num % 10;
        digitToWord(digit);
        rev_num /= 10;
    }

    return 0;
}
