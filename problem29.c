#include<stdio.h>
#include<string.h>
//find the salted form of a password entered by user if the salt is "123" and added at the end
void salting(char password[]);

int main ()
{
    char password[100];
    printf("enter password \n");
    scanf("%s",password);
    salting(password);

    return 0;
}

void salting(char password[])
{
    char salt[]="123";
    char newpass[200];
    strcpy(newpass,password);  //function libary of string
    strcat(newpass,salt);
    puts(newpass);
}