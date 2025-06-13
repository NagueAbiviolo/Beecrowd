#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int x[n], t[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
            t[i] = x[i];
        }
        sort(t, t + n);
        int alvo = t[n - 2], result;
        for (int j = 0; j < n; j++)
        {
            if (x[j] == alvo)
            {
                result = j + 1;
                break;
            }
        }
        cout << result << endl;
    }
}