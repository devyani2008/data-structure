#include<stdio.h>

int main()
{
    int a[10], i, location;
    char choice;

    printf("\nEnter 10 values: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("Enter the location to delete (0-9): ");
        scanf("%d", &location);

        if(location < 0 || location > 9)
        {
            printf("Invalid location!\n");
        }
        else
        {
            for(i = location; i < 9; i++)
            {
                a[i] = a[i + 1];
            }

            printf("Array after delete:\n");
            for(i = 0; i < 9; i++)
            {
                printf("%d\n", a[i]);
            }
        }

        printf("\nDo you want to continue delete? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    return 0;
}
