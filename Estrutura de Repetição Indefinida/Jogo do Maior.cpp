#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int p1, p2, pontos1 = 0, pontos2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> p1 >> p2;
            if (p1 > p2)
                pontos1++;
            else if (p2 > p1)
                pontos2++;
        }
        cout << pontos1 << " " << pontos2 << endl;
    }
}