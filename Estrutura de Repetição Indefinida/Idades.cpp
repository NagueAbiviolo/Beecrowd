#include <bits/stdc++.h>
int main()
{
    int h, sum = 0, i = 0;
    scanf("%d", &h);
    while (h >= 0)
    {
        i++;
        sum += h;
        scanf("%d", &h);
        }
    double media = (double)sum / i;
    printf("%.2lf\n", media);
}