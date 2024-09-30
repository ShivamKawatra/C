#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, pos, value;

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

            printf("\nEnter position on which you want to insert an element: ");
            scanf("%d", &pos);
        }
    }
    printf("\nEnter value which you want to insert: ");
    scanf("%d", &value);
    if (pos <= 0 || pos > size + 1)
    {
        printf("\nInvalid position\n");
        free(arr);
        return 1;
    }
    else
    {
        // Reallocate memory for one additional element
        arr = (int *)realloc(arr, (size + 1) * sizeof(int));
        if (arr == NULL)
        {
            printf("Memory reallocation failed\n");
            return 1;
        }

        for (int i = size; i >= pos; i--)
        {
            arr[i] = arr[i - 1]; // right shifting of elements
        }
        arr[pos - 1] = value;
        size++;
    }

    printf("\nArray updated values are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}
