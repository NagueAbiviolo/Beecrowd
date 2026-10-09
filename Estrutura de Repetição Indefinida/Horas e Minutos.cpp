#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A;
    while (cin >> A)
    {
        bool found = false;

        for (int t = 0; t < 720; ++t)
        {
            int posMin = t % 60;
            int posHour = (t / 12) % 60;

            int diff = abs(posMin - posHour);
            int ang = min(diff, 60 - diff) * 6;

            if (ang == A)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
