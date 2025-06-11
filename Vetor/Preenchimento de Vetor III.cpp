#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;

    double n[100];
    cin >> x;
    n[0] = x;
    for (int i = 1; i < 100; i++)
    {
        n[i] = n[i - 1] / 2;
    }
    for (int i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n", i, n[i]);
    }
}