#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, falsos = 0;
    while (cin >> n >> m && (n != 0 && m != 0))
    {
        int x[m];
        for (int i = 0; i < m; i++)
        {
            cin >> x[i];
        }
        sort(x, x + m);
        for (int i = 1; i < m; i++)
        {
            if (x[i] == x[i - 1])
                falsos++;
        }
        cout << falsos << endl;
        falsos = 0;
    }
}