#include <stdio.h>

int main()
{
    int month, year, n, rem;
    scanf("%d", &n);

    int arr[] = {365, 30};

    year = n / arr[0];
    rem = n % arr[0];
    month = rem / arr[1];
    rem %= arr[1];

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, rem);
    return 0;
}