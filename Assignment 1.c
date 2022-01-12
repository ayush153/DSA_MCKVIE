#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100], i, n, choice, min, max, c=0, p=0, p1, e1, p2;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    printf("Enter the element:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("1: To Find maximum and minimum element \n");
    printf("2: To Insert Element\n");
    printf("3: To Delete an element\n");
    printf("4: To Display Current Array\n\n");
    printf("5: To exit program\n");
    while (1)
    {
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            min = arr[0];
            max = arr[0];
            for (i = 0; i < n; i++)
            {
                if (min > arr[i])
                {
                    min = arr[i];
                    p = i;
                }
                if (max < arr[i])
                {
                    max = arr[i];
                    c = i;
                }
            }

            printf("Maximum element is:%d at position %d \n", max, (c + 1));
            printf("Minimum element is:%d at position %d \n", min, (p + 1));
            break;
        }
        case 2:
        {
            printf("Enter the position:");
            scanf("%d", &p1);
            printf("Enter the element:");
            scanf("%d", &e1);
            if (p1 <= n)
            {
                for (i = n - 1; i >= p1 - 1; i--)
                {
                    arr[i + 1] = arr[i];
                }
                arr[p1 - 1] = e1;
                n = n + 1;
            }
            else
            {
                printf("Chosen position is out of the array \n");
            }
            break;
        }
        case 3:
        {
            printf("Enter the position for delete :");
            scanf("%d", &p2);
            if (p2 <= n)
            {
                for (i = p2 - 1; i < n; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n = n - 1;
            }
            else
            {
                printf("Chosen position is out of the array \n");
            }
            break;
        }
        case 4:
        {
            for (i = 0; i < n; i++)
            {
                printf("%d\t", arr[i]);
            }
            printf("\n");
            break;
        }
        case 5:
        {
            exit(1);
        }
        default:
        {
            printf("Invalid choice");
        }
        }
    }
    return 0;
}

