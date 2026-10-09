#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while (cin >> x && x != 0)
    {
        int y = x;
        while (x > 1)
        {

            if (x % 2 == 0)
            {
                x /= 2;
                if (x > y)
                    y = x;
            }
            else
            {
                x = (x * 3) + 1;
                if (x > y)
                    y = x;
            }
        }
        cout << y << endl;
    }
}