#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, count = 1;
    while (cin >> x && x != EOF)
    {
        int count2 = 1;
        for (int i = 0; i <= x; i++)
        {
            for (int j = 0; j < i; j++)
            {
                count2++;
            }
        }
        count2 > 1 ? cout << "Caso " << count << ": " << count2 << " numeros" << endl : cout << "Caso " << count << ": " << count2 << " numero" << endl;
        cout << "0";
        for (int k = 0; k <= x; k++)
        {
            for (int l = 0; l < k; l++)
            {
                cout << " " << k;
            }
        }

        cout << endl;
        count++;
        cout << endl;
    }
}