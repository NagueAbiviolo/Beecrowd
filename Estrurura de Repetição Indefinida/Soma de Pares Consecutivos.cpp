#include <bits/stdc++.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x != 0)
    {
        int soma = 0, i = 0;
        while (i < 5)
        {
            if (x % 2 == 0)
            {
                soma += x;
                i++;
            }
            x++;
        }
        printf("%d\n", soma);
        scanf("%d", &x);
    }
}