#include <stdio.h>

int main()
{
    double range, given_salary = 0, new_salary = 0, earned = 0;
    int p;
    scanf("%lf", &given_salary);

    if (given_salary >= 0 && given_salary <= 400.00)
    {
        new_salary = given_salary + (given_salary * 0.15);
        p = 0.15 * 100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", new_salary, new_salary - given_salary, p);
    }
    else if (given_salary > 400.00 && given_salary <= 800.00)  // ← changed
    {
        new_salary = given_salary + (given_salary * 0.12);
        p = 0.12 * 100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", new_salary, new_salary - given_salary, p);
    }
    else if (given_salary > 800.00 && given_salary <= 1200.00)  
    {
        new_salary = given_salary + (given_salary * 0.10);
        p = 0.10 * 100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", new_salary, new_salary - given_salary, p);
    }
    else if (given_salary > 1200.00 && given_salary <= 2000.00)  
    {
        new_salary = given_salary + (given_salary * 0.07);
        p = 0.07 * 100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", new_salary, new_salary - given_salary, p);
    }
    else
    {
        new_salary = given_salary + (given_salary * 0.04);
        p = 0.04 * 100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", new_salary, new_salary - given_salary, p);
    }

    return 0;
}