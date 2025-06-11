#include <bits/stdc++.h>
int main()
{
    int x, pares = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
            pares++;
    }
    printf("%d valores pares\n", pares);
}