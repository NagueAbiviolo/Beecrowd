#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    while (true)
    {
        cin >> a;
        if (a == 0)
            break;
        cin >> b;
        cin >> c;

        int result = sqrt((a * b) / (c / 100.0));
        cout << result << endl;
    }
}