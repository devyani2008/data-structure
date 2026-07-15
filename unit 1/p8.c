#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i,loc;

    printf("\n Enter 10 values:");
    for(i=0;i<10;i++);
    {
        scanf("%d",&a[i]);
    }
    printf("enter the location:");
    scanf("%d",&loc);

        for(i=loc-1;i<=9;i++)
        {
            a[i]=a[i+1];
        }
            printf("array after delete:\n");
            for(i=0;i<9;i++)
            {

            }
}

