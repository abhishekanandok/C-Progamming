#include <stdio.h>

// Function to convert a digit to its corresponding decimal word
void digitToWord(int digit, int pos)
{
    switch (pos)
    {
    case 0:
        switch (digit)
        {
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        }
        break;
    case 1:
        switch (digit)
        {
        case 1:
            printf("ten ");
            break;
        case 2:
            printf("twenty ");
            break;
        case 3:
            printf("thirty ");
            break;
        case 4:
            printf("forty ");
            break;
        case 5:
            printf("fifty ");
            break;
        case 6:
            printf("sixty ");
            break;
        case 7:
            printf("seventy ");
            break;
        case 8:
            printf("eighty ");
            break;
        case 9:
            printf("ninety ");
            break;
        }
        break;
    case 2:
        switch (digit)
        {
        case 1:
            printf("one hundred ");
            break;
        case 2:
            printf("two hundred ");
            break;
        case 3:
            printf("three hundred ");
            break;
        case 4:
            printf("four hundred ");
            break;
        case 5:
            printf("five hundred ");
            break;
        case 6:
            printf("six hundred ");
            break;
        case 7:
            printf("seven hundred ");
            break;
        case 8:
            printf("eight hundred ");
            break;
        case 9:
            printf("nine hundred ");
            break;
        }
        break;
    case 3:
        switch (digit)
        {
        case 1:
            printf("one thousand ");
            break;
        case 2:
            printf("two thousand ");
            break;
        case 3:
            printf("three thousand ");
            break;
        case 4:
            printf("four thousand ");
            break;
        case 5:
            printf("five thousand ");
            break;
        case 6:
            printf("six thousand ");
            break;
        case 7:
            printf("seven thousand ");
            break;
        case 8:
            printf("eight thousand ");
            break;
        case 9:
            printf("nine thousand ");
            break;
        }
        break;
    case 4:
        switch (digit)
        {
        case 1:
            printf("ten thousand ");
            break;
        case 2:
            printf("twenty ");
            break;
        case 3:
            printf("thirty ");
            break;
        case 4:
            printf("forty ");
            break;
        case 5:
            printf("fifty ");
            break;
        case 6:
            printf("sixty ");
            break;
        case 7:
            printf("seventy ");
            break;
        case 8:
            printf("eighty ");
            break;
        case 9:
            printf("ninety ");
            break;
        }
        break;
    case 5:
        switch (digit)
        {

        case 1:
            printf("one lakh ");
            break;
        case 2:
            printf("two lakh ");
            break;
        case 3:
            printf("three lakh ");
            break;
        case 4:
            printf("four lakh ");
            break;
        case 5:
            printf("five lakh ");
            break;
        case 6:
            printf("six lakh ");
            break;
        case 7:
            printf("seven lakh ");
            break;
        case 8:
            printf("eight lakh ");
            break;
        case 9:
            printf("nine lakh ");
            break;
        }
        break;
    case 6:
        switch (digit)
        {
        case 1:
            printf("ten lakh ");
            break;
        case 2:
            printf("twenty ");
            break;
        case 3:
            printf("thirty ");
            break;
        case 4:
            printf("forty ");
            break;
        case 5:
            printf("fifty ");
            break;
        case 6:
            printf("sixty ");
            break;
        case 7:
            printf("seventy ");
            break;
        case 8:
            printf("eighty ");
            break;
        case 9:
            printf("ninety ");
            break;
        }
        break;
    case 7:
        switch (digit)
        {
        case 1:
            printf("one crore ");
            break;
        case 2:
            printf("two crore ");
            break;
        case 3:
            printf("three crore ");
            break;
        case 4:
            printf("four crore ");
            break;
        case 5:
            printf("five crore ");
            break;
        case 6:
            printf("six crore ");
            break;
        case 7:
            printf("seven crore ");
            break;
        case 8:
            printf("eight crore ");
            break;
        case 9:
            printf("nine crore ");
            break;
        }
        break;
    }
