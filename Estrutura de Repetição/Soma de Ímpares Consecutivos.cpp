#include <bits/stdc++.h>
int main()
{
    int n, first, last, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &first, &last);
        if (first > last)
        {
            int temp = first;
            first = last;
            last = temp;
        }
        for (int i = first + 1; i < last; i++)
        {
            if (i % 2 == 1 || i % 2 == -1)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }
}