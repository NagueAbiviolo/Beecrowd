#include <bits/stdc++.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d\n", i);
        }
    }
}