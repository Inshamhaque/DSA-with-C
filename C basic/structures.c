#include<stdio.h>
#include<string.h>
struct student
    {
        char name[100];
        int roll;
        float cgpa;
    };
int main()
{
      
    /*struct student s1;
    printf("student name:    ");
    scanf("%s",s1.name);
    printf("stdent roll =    ");
    scanf("%d",&s1.roll);
    printf("student cgpa = ");
    scanf("%f",s1.cgpa);

    /*struct student s2;
    printf("student name:    ");
    scanjf("%s",s1.name);
    printf("stdent roll =    ");
    scanf("%d",&s1.roll);
    printf("student cgpa = ");
    scanf("%f",s1.cgpa);*/

    struct student s3;
    s3.roll = 19;
    s3.cgpa = 9.6;
    strcpy(s3.name,"rohit");
    printf("student name is : %s",s3.name);
    printf("\nstudent roll is : %d", s3.roll);
    printf("\nstudent cgpa is: %f",s3.cgpa);



}