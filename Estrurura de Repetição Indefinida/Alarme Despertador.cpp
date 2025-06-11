#include <bits/stdc++.h>
int main()
{
    int h, m, h2, m2;
    while (true)
    {
        scanf("%d %d %d %d", &h, &m, &h2, &m2);
        if (h == 0 && m == 0 && h2 == 0 && m2 == 0)
            break;
        else
        {
            int totalMH = (h * 60) + m;
            int totalMH2 = (h2 * 60) + m2;
            if (totalMH > totalMH2)
                totalMH2 += 24 * 60;
            int total = totalMH2 - totalMH;
            printf("%d\n", total);
        }
    }
}