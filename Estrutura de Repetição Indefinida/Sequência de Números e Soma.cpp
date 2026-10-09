#include <bits/stdc++.h>
int main()
{
    int x, y;
    while (true)
    {
        scanf("%d %d", &x, &y);
        if (x <= 0 || y <= 0)
            break;
        else
        {
            int soma = 0;
            if (x < y)
            {
                for (int i = x; i <= y; i++)
                {
                    printf("%d ", i);
                    soma += i;
                }
            }
            else
            {
                for (int i = y; i <= x; i++)
                {
                    printf("%d ", i);
                    soma += i;
                }
            }
            printf("Sum=%d\n", soma);
        }
    }
}