#include <bits/stdc++.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        int y;
        scanf("%d", &y);
        if (y % 2 == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}