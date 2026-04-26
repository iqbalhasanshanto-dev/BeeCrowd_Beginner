#include <stdio.h>

int main() {
    double MEDIA, A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    MEDIA = (A * 2 + B * 3 + C * 5) / (2+3+5);

    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}