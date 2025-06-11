#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            int c, e;
            i == 0 ? scanf("%dx%d", &c, &e) : scanf(" + %dx%d", &c, &e);
            int result = c * e;
            e > 2 ? cout << result << "x" << e - 1 : cout << result << "x";
            i < n - 1 ? cout << " + " : cout << endl;
        }
    }
}