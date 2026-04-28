#include <stdio.h>

int main()
{
    int arr[3], org[3], temp;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        org[i] = arr[i];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", org[i]);
    }

    return 0;
}