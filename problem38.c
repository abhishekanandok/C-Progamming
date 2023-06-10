#include <stdio.h>
// make a duplicate function of strcmp
int my_strcmp(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
    {
        i++;
    }
    if (str1[i] == str2[i])
    {
        return 0;
    }
    else if (str1[i] < str2[i])
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char str1[] = "heslo";
    char str2[] = "herld";

    int result = my_strcmp(str1, str2);

    printf("%d",result);

    return 0;
}
