#include <stdio.h>

int main() {
    double time, speed;
    scanf("%lf %lf", &time, &speed);
    double distance = time * speed;
    double liters = distance / 12.0;
    printf("%.3f\n", liters);
    return 0;
}