#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        long long int fib[x];
        fib[0] = 0;
        fib[1] = 1;
        for (int j = 2; j <= x; j++)
        {
            fib[j] = fib[j - 1] + fib[j - 2];
        }
        cout << "Fib(" << x << ") = " << fib[x] << endl;
    }
}