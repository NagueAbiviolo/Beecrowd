#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                x -= 2;
                x = (x * 2) + 2;
            }
            else
            {
                x -= 1;
                x = (x * 2) + 1;
            }
            cout << x << endl;
        }
    }
}