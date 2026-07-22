#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[20];
};

void main()
{
    struct student s1;

    printf("\n enter roll no:");
    scanf("%d",&s1.rollno);

    printf("\n enter name:");
    scanf("%s",s1.name);

    printf("\n student data is as follows");
    printf("\n****************************");

    printf("\n roll number is:%d",s1.rollno);
    printf("\n name is: %s",s1.name);

    getch();
}
