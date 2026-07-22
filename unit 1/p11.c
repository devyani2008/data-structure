#include <stdio.h>

void main()
{
    int m1[2][3], m2[3][2], m3[2][2], i, j, k;

    printf("Enter first matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&m1[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            scanf("%d",&m2[i][j]);

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            m3[i][j]=0;
            for(k=0;k<2;k++)
                m3[i][j]+=m1[i][j]*m2[i][j];
        }

    printf("Result:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d ",m3[i][j]);
        printf("\n");
    }
}
