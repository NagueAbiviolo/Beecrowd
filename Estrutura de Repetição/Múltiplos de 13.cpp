#include <bits/stdc++.h>
int main()
{
    int first, last, sum = 0;
    scanf("%d %d", &first, &last);
    if (first > last)
    {
        int temp = first;
        first = last;
        last = temp;
    }
    for (int i = first; i <= last; i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
}