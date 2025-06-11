#include <bits/stdc++.h>
int main()
{
    int q, satisfeitos = 0;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int x;
        scanf("%d", &x);
        if (x == 0)
        {
            satisfeitos++;
        }
    }
    if (q % 2 == 0)
    {
        if (satisfeitos > q / 2)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    else
    {
        if (satisfeitos >= (q / 2) + 1)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
}