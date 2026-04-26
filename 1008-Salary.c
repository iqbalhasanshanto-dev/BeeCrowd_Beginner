#include <stdio.h>

int main()
{
    float costperhr, salary = 0;
    int employeenum, workhr;

    scanf("%d%d", &employeenum, &workhr);
    scanf("%f", &costperhr);

    salary = workhr * costperhr;

    printf("NUMBER = %d\n", employeenum);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}