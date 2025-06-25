#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string op;
        int result;
        cin >> op;
        if (op[0] == op[2])
        {
            result = (op[0] - '0') * (op[2] - '0');
        }
        else
        {
            if (op[1] < 97)
            {
                result = (op[2] - '0') - (op[0] - '0');
            }
            else
                result = (op[0] - '0') + (op[2] - '0');
        }
        cout << result << endl;
    }
}
// g++ ./nome.cpp -o exe;./exe