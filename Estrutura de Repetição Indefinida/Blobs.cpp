#include <bits/stdc++.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        double c;
        int j = 0;
        scanf("%lf", &c);
        while (c > 1)
        {
            c /= 2;
            j++;
        }
        printf("%d dias\n", j);
    }
}