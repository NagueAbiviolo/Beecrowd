#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j = 0, m = 0;
    while (cin >> n && n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                m++;

            else
                j++;
        }
        cout << "Mary won " << m << " times and John won " << j << " times" << endl;
        j = 0;
        m = 0;
    }
}