#include <bits/stdc++.h>
int main()
{
    double x, soma;
    int pos = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &x);
        if (x > 0){
            pos++;
            soma += x;
        }
    }
    printf("%d valores positivos\n", pos);
    printf("%.1lf\n", soma / pos);
}