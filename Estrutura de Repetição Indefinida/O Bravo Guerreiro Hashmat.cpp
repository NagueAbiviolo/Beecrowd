#include <bits/stdc++.h>
int main()
{
    long long int x, y;
    while (scanf("%lld %lld", &x, &y) != EOF)
    {
        printf("%lld\n", llabs(y - x));
    }
}