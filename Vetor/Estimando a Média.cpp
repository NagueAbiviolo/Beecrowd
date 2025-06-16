#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int caso = 1; caso <= T; caso++)
    {
        int N;
        cin >> N;
        vector<int> P(N);
        for (int i = 0; i < N; i++)
            cin >> P[i];

        int maior = *max_element(P.begin(), P.end());
        int max_seq = 0, atual = 0;

        for (int i = 0; i < N; i++)
        {
            if (P[i] == maior)
            {
                atual++;
                if (atual > max_seq)
                    max_seq = atual;
            }
            else
            {
                atual = 0;
            }
        }

        cout << "Caso #" << caso << ": " << max_seq << endl;
    }
    return 0;
}