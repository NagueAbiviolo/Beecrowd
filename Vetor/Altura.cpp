#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        vector<int> alturas(size);
        for (int j = 0; j < size; j++)
        {
            cin >> alturas[j];
        }
        sort(alturas.begin(), alturas.end());
        for (int j = 0; j < size; j++)
        {
            cout << alturas[j];
            if (j != size - 1)
                cout << " ";
            else
                cout << endl;
        }
    }
}