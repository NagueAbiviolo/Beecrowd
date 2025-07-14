#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l, c;
        cin >> l >> c;
        if (l > c)
            total += c;
    }
    cout << total << endl;
}
// g++ ./nome.cpp -o exe;./exe