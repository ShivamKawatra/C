#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size, pos;

    printf("Enter value of size of array: ");
    scanf("%d", &size);

    int *arr = NULL;
    if (size > 0)
    {
        arr = (int *)malloc(size * sizeof(int));
        if (arr == NULL)
        {
            printf("\nMemory allocation failed\n");
            return 1;
        }
        else
        {
            printf("\nEnter the values:-\n");
            for (int i = 0; i < size; i++)
            {
                scanf("%d", &arr[i]);
            }

            printf("Array initial values are:-\n");
            for (int i = 0; i < size; i++)
            {
                printf("%d\n", arr[i]);
            }

            printf("\nEnter position on which you want to delete an element: ");
            scanf("%d", &pos);
        }
    }
    if (pos <= 0 || pos > size)
    {
        printf("\nInvalid position\n");
        return 1;
    }
    else
    {
        for (int i = pos - 1; i < size - 1; i++)
        {
            arr[i]=arr[i+1]; // left shifting of elements
        }
        size--;
    }

    printf("\nArray updated values are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
