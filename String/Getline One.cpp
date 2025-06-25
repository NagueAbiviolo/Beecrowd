#include <bits/stdc++.h>
using namespace std;
int main()
{
    string nome;
    double media = 0;
    int n = 0;
    while (getline(cin, nome))
    {
        n++;
        int dist;
        cin >> dist;
        cin.ignore();
        media += dist;
    }
    printf("%.1lf\n", media / n);
}
// g++ ./nome.cpp -o exe;./exe