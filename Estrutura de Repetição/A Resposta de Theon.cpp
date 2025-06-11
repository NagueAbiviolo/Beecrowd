#include <bits/stdc++.h>
int main()
{
    int n, menor = INT_MAX, posicao;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x < menor)
        {
            menor = x;
            posicao = i;
        }
    }
    printf("%d\n", posicao);
}