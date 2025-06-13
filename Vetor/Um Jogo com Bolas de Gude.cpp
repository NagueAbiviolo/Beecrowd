#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        long long int bacias[n];
        for (int i = 0; i < n; i++)
        {
            cin >> bacias[i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                bacias[i] += bacias[j];
            }
        }
        long long int rodadas = 0;
        for (int i = 0; i < n; i++)
        {
            rodadas += bacias[i];
        }
        cout << rodadas << endl;
    }
}