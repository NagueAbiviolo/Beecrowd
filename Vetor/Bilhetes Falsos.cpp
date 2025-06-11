#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, falsos = 0;
    while (cin >> n >> m && (n != 0 && m != 0))
    {
        int x[m];
        int y[n + 1];
        for (int i = 0; i <= n; i++)
        {
            y[i] = 0;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x[i];
            y[x[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (y[i] > 1)
                falsos++;
        }
        cout << falsos << endl;
        falsos = 0;
    }
}