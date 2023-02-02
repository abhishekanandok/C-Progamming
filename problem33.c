#include <stdio.h>
/*Make a system that can store information of all students, teachers & staff of your college in the form
of structures*/

struct student
{
    int roll_no;
    char name[50];
    char course[50];
    int year;
};

struct teacher
{
    int id;
    char name[50];
    char subject[50];
    int experience;
};

int main()
{
    // Array of student
    struct student students[100];
    int num_students;

    // Array of teacher structures
    struct teacher teachers[50];
    int num_teachers;

    // Input the number of students, teachers, and staff
    printf("Enter the number of students: "); //number liya gaya,taki loop unta bar hi chale
    scanf("%d", &num_students);

    printf("Enter the number of teachers: ");
    scanf("%d", &num_teachers);

    // Input student information
    for (int i = 0; i < num_students; i++)
    {
        printf("\nEnter information for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Course: ");
        scanf("%s", students[i].course);

        printf("Year: ");
        scanf("%d", &students[i].year);
    }

    // Input teacher information
    for (int i = 0; i < num_teachers; i++)
    {
        printf("\nEnter information for teacher %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &teachers[i].id);

        printf("Name: ");
        scanf("%s", teachers[i].name);

        printf("Subject: ");
        scanf("%s", teachers[i].subject);

        printf("Experience: ");
        scanf("%d", &teachers[i].experience);
    }

    // Print student information
    printf("\nStudent Information:\n");
    for (int i = 0; i < num_students; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll number %d \n", students[i].roll_no);
        printf("Name :- %s \n", students[i].name);
        printf("Course is :- %s \n", students[i].course);
        printf("Year :- %d \n", students[i].year);
    }

    return 0;
}
