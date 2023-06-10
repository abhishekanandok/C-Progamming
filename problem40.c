#include <stdio.h>
// make a duplicate function of "strcat"
void my_strcat(char dest[], char src[])
{
    int i, j;
    i = j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main()
{
    char str1[20] = "hello ";
    char str2[] = "world!";

    my_strcat(str1, str2);

    printf("%s\n", str1);

    return 0;
}
