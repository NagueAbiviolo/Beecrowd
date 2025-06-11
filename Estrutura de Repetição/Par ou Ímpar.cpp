#include <bits/stdc++.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &y);
        if (y != 0)
        {
            if (y % 2 == 0 && y != 0)
                printf("EVEN");
            else
                printf("ODD");
            if (y > 0)
                printf(" POSITIVE\n");
            else if (y < 0)
                printf(" NEGATIVE\n");
        }
        else
            printf("NULL\n");
    }
}
