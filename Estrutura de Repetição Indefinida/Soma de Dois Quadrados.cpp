#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while (cin >> x)
    {
        int reduce = sqrt(x);
        bool found = false;
        for (int i = reduce; i >= 0 && !found; i--)
        {
            for (int j = 0; j <= reduce; j++)
            {
                if ((i * i) + (j * j) == x)
                {
                    cout << "YES" << endl;
                    found = true;
                    break;
                }
            }
        }
        if (!found)
            cout << "NO" << endl;
    }
}