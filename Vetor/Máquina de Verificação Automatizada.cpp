#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[5], y[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> y[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (x[i] == y[i])
        {
            cout << "N" << endl;
            break;
        }
        if (i == 4)
        {
            cout << "Y" << endl;
        }
    }
}