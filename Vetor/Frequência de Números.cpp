#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[n], maximo = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > maximo)
            maximo = v[i];
    }
    int freq[maximo + 1];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }
    for (int i = 0; i <= maximo; i++)
    {
        if (freq[i] > 0)
        {
            cout << i << " aparece " << freq[i] << " vez(es)" << endl;
        }
    }
}
// g++ ./nome.cpp -o exe;./exe