#include <bits/stdc++.h>
using namespace std;
int fatorial(int n)
{
    if (n <= 1)
        return 1;
    return n * fatorial(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int size = sqrt(n);
    int x[size];
    for (int i = 1; i < size; i++)
    {
        x[i] == fatorial(i);
    }
    
}