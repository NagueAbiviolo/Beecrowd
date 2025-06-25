#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[10], t;
    v[0] = 6;
    v[1] = 2;
    v[2] = 5;
    v[3] = 5;
    v[4] = 4;
    v[5] = 5;
    v[6] = 6;
    v[7] = 3;
    v[8] = 7;
    v[9] = 6;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        string num;
        cin >> num;
        int tam = num.size(), sum = 0;
        for (int i = 0; i < tam; i++)
        {
            int x = num[i] - '0';
            sum += v[x];
        }
        cout << sum << " leds" << endl;
    }
}
// g++ ./nome.cpp -o exe;./exe