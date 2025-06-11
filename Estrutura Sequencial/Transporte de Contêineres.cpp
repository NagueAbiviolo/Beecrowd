#include <bits/stdc++.h>
int main()
{
    int a, b, c, x, y, z, result, camadas;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &x, &y, &z);
    camadas = z / c;
    result = (x / a) * (y / b) * camadas;
    printf("%d\n", result);
}