#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x[5], y = 0;
    for (int j = 0; j < 5; j++)
    {
        cin >> x[j];
        if (x[j] == t)
            y++;
    }
    cout << y << endl;
}
// g++ ./nome.cpp -o exe;./exe