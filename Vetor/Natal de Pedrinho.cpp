#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, d;
    while (cin >> m >> d)
    {
        if (m == 12 && d == 24)
        {
            cout << "E vespera de natal!" << endl;
        }
        else if (m == 12 && d == 25)
        {
            cout << "E natal!" << endl;
        }
        else if (m == 12 && d > 25)
        {
            cout << "Ja passou!" << endl;
        }
        }
}
// g++ ./nome.cpp -o exe;./exe