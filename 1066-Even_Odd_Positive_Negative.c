#include <stdio.h>

int main()
{
    int arr[5], even_count = 0, odd_count=0, positive_count = 0, negative_count = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        // even
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        //odd
        if (arr[i] % 2 != 0)
        {
            odd_count++;
        }
        //positive
        if (arr[i] > 0)
        {
            positive_count++;
        }
        //negative
        if (arr[i] < 0)
        {
            negative_count++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even_count, odd_count, positive_count, negative_count);

    return 0;
}