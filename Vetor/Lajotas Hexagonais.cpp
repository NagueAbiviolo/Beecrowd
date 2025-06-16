#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int x[n + 1];
        x[0] = 1;
        x[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            x[i] = x[i - 1] + x[i - 2];
        }
        cout << x[n] << endl;
    }
}