#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, n, pos_antigo, pos_atual;
    cin >> p;

    n = p / 2;

    int posicao_alvo = 0;
    int posicao_atual_da_carta = 0;
    int numerdo_de_embaralhamento = 0;

    do
    {
        numerdo_de_embaralhamento++;
        if (posicao_atual_da_carta < n)
        {
            posicao_atual_da_carta = posicao_atual_da_carta * 2 + 1;
        }
        else
        {
            posicao_atual_da_carta = (posicao_atual_da_carta - n) * 2;
        }
    } while (posicao_atual_da_carta != posicao_alvo);
    cout << numerdo_de_embaralhamento << endl;
}