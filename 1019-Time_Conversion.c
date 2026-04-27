#include<stdio.h>

int main() {
    long n, hour, min, sec;
    scanf("%ld", &n);
    hour = n / 3600;
    min = (n % 3600) /60;
    sec = n % 60;

    printf("%ld:%ld:%ld\n", hour, min, sec);
    return 0;
}