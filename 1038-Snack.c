#include<stdio.h>

int main() {
    int n, c;
    scanf("%d%d", &n, &c);

    if (n>5)
    {
        return 0;
    } else {
        switch (n)
        {
        case 1:
            printf("Total: R$ %.2lf\n", (double)4*c);
            break;
        case 2:
            printf("Total: R$ %.2lf\n", (double)4.50*c);
            break;
        case 3:
            printf("Total: R$ %.2lf\n", (double)5*c);
            break;
        case 4:
            printf("Total: R$ %.2lf\n", (double)2*c);
            break;
        case 5:
            printf("Total: R$ %.2lf\n", (double)1.50*c);
            break;
        
        default:
            break;
        }
    }
    return 0;
}