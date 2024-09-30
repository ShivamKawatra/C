#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, value;
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
            printf("\nEnter the values of elements of the array:-\n");
            for (int i = 0; i < size; i++)
            {
                scanf("%d", &arr[i]);
            }

            printf("Array initial values are:-\n");
            for (int i = 0; i < size; i++)
            {
                printf("%d\n", arr[i]);
            }
        }
    }
    printf("\nEnter value which you want to insert: ");
    scanf("%d", &value);

    // Reallocate memory for one additional element
    arr = (int *)realloc(arr, (size + 1) * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory reallocation failed\n");
        return 1;
    }
    else
    {
        for (int i = size; i > 0; i--)
        {
            arr[i] = arr[i - 1]; // right shifting of elements
        }
        arr[0] = value;
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
