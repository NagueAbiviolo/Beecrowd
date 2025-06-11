#include <bits/stdc++.h>
int main()
{
    int validas = 0;
    double x, sum = 0;

    while (validas <= 1)
    {
        scanf("%lf", &x);
        if (x >= 0 && x <= 10)
        {
            validas++;
            sum += x;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n", sum / 2.0);
}