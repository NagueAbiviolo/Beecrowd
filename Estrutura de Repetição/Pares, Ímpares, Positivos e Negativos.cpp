#include <bits/stdc++.h>
int main()
{
    int x, pares = 0, impares = 0, pos = 0, neg = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0) pares++;
        else impares++;
        if (x > 0) pos++;
        else if (x < 0) neg++;
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
}