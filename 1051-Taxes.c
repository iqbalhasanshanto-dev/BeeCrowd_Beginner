#include <stdio.h>

int main() {
    double salary, tax = 0;
    scanf("%lf", &salary);

    if (salary <= 2000) {
        printf("Isento\n");
    } else {
        if (salary <= 3000) {
            tax += (salary - 2000) * 0.08;
        } else if (salary <= 4500) {
            tax += 1000 * 0.08;
            tax += (salary - 3000) * 0.18;
        } else {
            tax += 1000 * 0.08;
            tax += 1500 * 0.18;
            tax += (salary - 4500) * 0.28;
        }
        printf("R$ %.2f\n", tax);
    }

    return 0;
}