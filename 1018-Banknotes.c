#include<stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", n);

    long long banknotes[]={100, 50, 20, 10, 5, 2, 1};
    for (long long i = 0; i < 7; i++)
    {
        printf("%lld nota(s) de R$ %lld,00\n", n/ banknotes[i], banknotes[i]);
        n %= banknotes[i];
    }
    
}