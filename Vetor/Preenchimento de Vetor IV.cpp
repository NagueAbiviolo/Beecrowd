#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pares[5], impares[5], cp = 0, ci = 0;
    for (int i = 0; i < 15; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            pares[cp] = x;
            cp++;
        }
        else
        {
            impares[ci] = x;
            ci++;
        }
        if (cp == 5)
        {
            for (int j = 0; j < cp; j++)
            {
                printf("par[%d] = %d\n", j, pares[j]);
            }
            cp = 0;
        }
        if (ci == 5)
        {
            for (int h = 0; h < ci; h++)
            {
                printf("impar[%d] = %d\n", h, impares[h]);
            }
            ci = 0;
        }
    }
    for (int i = 0; i < ci; i++)
    {
        printf("impar[%d] = %d\n", i, impares[i]);
    }
    for (int i = 0; i < cp; i++)
    {
        printf("par[%d] = %d\n", i, pares[i]);
    }
}