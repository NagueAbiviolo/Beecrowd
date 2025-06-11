#include <bits/stdc++.h>
int main()
{
    int n, x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        int j = x, sum = 0, imp = 0;
        while (imp < y)
        {
            if (j % 2 != 0)
            {
                sum += j;
                imp++;
            }
            j++;
        }
        printf("%d\n", sum);
        }
}