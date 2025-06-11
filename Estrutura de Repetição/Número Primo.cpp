#include <bits/stdc++.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        scanf("%d", &x);
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                sum += i;
            }
        }
        if (sum == 0)
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }
    }
}