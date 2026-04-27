#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);

    // Convert to cents to avoid floating point issues
    long long total = (long long)(n * 100 + 0.5);

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    double note_vals[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};

    int coins[] = {100, 50, 25, 10, 5, 1};
    double coin_vals[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        long long qty = total / notes[i];
        total %= notes[i];
        printf("%lld nota(s) de R$ %.2f\n", qty, note_vals[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        long long qty = total / coins[i];
        total %= coins[i];
        printf("%lld moeda(s) de R$ %.2f\n", qty, coin_vals[i]);
    }

    return 0;
}