#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, total = 0;
    cin >> n;
    int f[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        if (f[i] > max)
            max = f[i];
    }
    vector<int> frequencia(max + 1, 0);
    for (int i = 0; i < n; i++)
    {
        total++;
        frequencia[f[i]]++;
        if (frequencia[f[i]] > 1)
        {
            total--;
        }
    }
    cout << total << endl;
}
// g++ ./nome.cpp -o exe;./exe