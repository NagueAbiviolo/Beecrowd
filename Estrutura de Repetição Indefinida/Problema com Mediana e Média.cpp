#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b && a != 0 && b != 0)
    {
        if (a > b)
        {
            swap(a, b);
        }
        int x = a - (b - a);
        cout << x << endl;
    }
}