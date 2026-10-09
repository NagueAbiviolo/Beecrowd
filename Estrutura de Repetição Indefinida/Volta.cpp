#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, voltas = 1;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    int modb = b;
    int moda = a;

    while (b - a < modb)
    {
        voltas++;
        a += moda;
        b += modb;
    }
    cout << voltas << endl;
}