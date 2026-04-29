#include <stdio.h>

int main()
{
    float arr[6], sum=0;
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
            count++;
        }
    }
    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum / count);

    return 0;
}