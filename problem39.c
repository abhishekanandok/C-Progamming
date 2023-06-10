#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello";
    char str2[] = "hello";

    int result = strcmp(str1, str2);

    printf("%d", result);

    return 0;
}
