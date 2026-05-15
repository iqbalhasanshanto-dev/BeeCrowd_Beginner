#include<stdio.h>

int main() {
    int n, x, in = 0, out = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (i>= 10 && i<=20)
        {
            in++;
        } else {
            out++;
        }
        
    }
    printf("%d\n", in);
    printf("%d\n", out);
}