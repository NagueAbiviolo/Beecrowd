#include <bits/stdc++.h>
using namespace std;
int main()
{
    string nome;
    double sal, vendas;
    cin >> nome;
    cin >> sal;
    cin >> vendas;
    printf("TOTAL = R$ %.2lf\n", sal + (vendas * 0.15));
}
// g++ ./nome.cpp -o exe;./exe