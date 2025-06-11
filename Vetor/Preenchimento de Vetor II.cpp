#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, v[1000];
    cin >> n;
    for (int i = 0; i < 1000; i++)
    {
        v[i] = i % n;
    }
    for (int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << v[i] << endl;
    }
}