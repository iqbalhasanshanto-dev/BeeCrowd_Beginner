#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, maiorAB, eh_o_maior;
    scanf("%d%d%d", &A, &B, &C);

    maiorAB = (A + B + abs(A - B)) / 2;
    
    eh_o_maior= (maiorAB + C + abs(maiorAB - C)) / 2;

    printf("%d eh o maior\n", eh_o_maior);
    return 0;
}