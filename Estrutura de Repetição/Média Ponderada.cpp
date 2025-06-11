#include <bits/stdc++.h>
int main()
{
    int n;
    double nota1, nota2, nota3, media;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
        media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
        printf("%.1lf\n", media);
    }
}