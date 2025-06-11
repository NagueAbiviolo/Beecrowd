#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, menor = INT_MAX;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
        if (v[i] < menor)
        {
            menor = v[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == menor)
        {
            printf("Menor valor: %d\n", menor);
            printf("Posicao: %d\n", i);
        }
    }
}