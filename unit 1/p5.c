#include <stdio.h>

void main()
{
    int a[3], b[3], c[6];
    int i, j;

    printf("Enter 3 elements of a:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter 3 elements of b:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < 3; i++)
    {
        c[i] = a[i];
    }

    for(i = 0, j = 3; i < 3; i++, j++)
    {
        c[j] = b[i];
    }

    printf("Merge arrays:\n");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", c[i]);
    }
}
