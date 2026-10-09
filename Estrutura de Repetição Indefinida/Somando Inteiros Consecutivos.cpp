#include <bits/stdc++.h>
int main()
{
    int a, n;
    scanf("%d", &a);
    scanf("%d", &n);
    while (n <= 0)
    {
        scanf("%d", &n);
    }
    int sum = a;
    for (int i = 1; i < n; i++)
    {
        sum += a + i;
    }
    printf("%d\n", sum);
}