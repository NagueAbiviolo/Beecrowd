#include <bits/stdc++.h>
int main()
{
    int n, x, y;
    double result;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        if (y == 0)
            printf("divisao impossivel\n");
        else
        {
            result = (double)x / y;
            printf("%.1f\n", result);
        }
    }
}