#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string nome;
        int forca;
        cin >> nome >> forca;
        if (nome == "Thor")
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
}
// g++ ./nome.cpp -o exe;./exe