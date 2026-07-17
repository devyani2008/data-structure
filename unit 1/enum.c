#include<stdio.h>
#include<conio.h>

enum week{mon,tue,wed,thu,fri,sat,sun};

void main()
{
    enum week w;
    w=sat;
    printf("\n constant value of sat is:%d",w);
    getch();
}
