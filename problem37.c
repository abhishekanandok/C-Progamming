#include<stdio.h>
int main ()
{
    char name[20];
    char abhi[]="Abhishek Anand";

    printf("enter your Name\n");
    scanf("%s",name);
    printf("%s\n",name);
    printf("my name is %s\n",abhi);

    puts(abhi);//puts automatically add next line
    puts("raja babu");
    puts("raja babau ");

    return 0;
}