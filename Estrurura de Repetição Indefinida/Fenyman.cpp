#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int result = 0;
        for (int i = 1; i <= n; i++)
        {
            result += i * i;
        }
        cout << result << endl;
    }
}