#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        int j[t];
        for (int k = 0; k < t; k++)
        {
            cin >> j[k];
        }
        sort(j, j + t);
        int result = j[t / 2];
        cout << "Case " << i << ": " << result << endl;
    }
}