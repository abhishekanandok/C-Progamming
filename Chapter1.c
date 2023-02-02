#include<stdio.h>
//this is demo progamming......
int main() {
    printf("Abhishek Mota \n");
    printf("Abhishek Mota \n");
    printf("Abhishek Mota \n");
    printf("Abhishek Mota \n");

    int age = 22;
    float pie = 3.14;
    char percentage = '%';

    printf("age is %d", age);
    printf("age is %f", pie);
    printf("age is %c", percentage);

//sum of two numbers...

    int a, b;
    printf("enter a \n");
    scanf("%d", &a);
    printf("enter b \n");
    scanf("%d", &b);
    printf("sum of a & b is : %d \n", a+b);

//Area of square.....

    int side;
    scanf("%d", &side);
    printf("%d", side * side);

    //Area of ciecle.....

    float radius;
    scanf("%f", &radius);
    printf("%f", 3.14 * radius * radius);

    return 0;

}