#include <bits/stdc++.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int h, m, o;
        scanf("%d %d %d", &h, &m, &o);
        h < 10 ? printf("0") : printf("");
        printf("%d:", h);
        m < 10 ? printf("0") : printf("");
        printf("%d - ", m);
        o == 1 ? printf("A porta abriu!\n") : printf("A porta fechou!\n");
    }
}