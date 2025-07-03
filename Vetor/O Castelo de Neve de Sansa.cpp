#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> h(N);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    vector<int> peaks;

    int i = 0;

    while (i + 1 < N && h[i] < h[i + 1])
        i++;

    if (i == 0 || i == N - 1)
    {
        cout << "ugly" << endl;
        return 0;
    }

    peaks.push_back(i);

    for (int p = 1; p < K; p++)
    {
        int start = i;

        while (i + 1 < N && h[i] > h[i + 1])
            i++;

        if (i == start)
        {
            cout << "ugly" << endl;
            return 0;
        }

        int valley = i;

        start = i;
        while (i + 1 < N && h[i] < h[i + 1])
            i++;

        if (i == start)
        {
            cout << "ugly" << endl;
            return 0;
        }

        peaks.push_back(i);
    }

    for (int j = i; j + 1 < N; j++)
    {
        if (h[j] <= h[j + 1])
        {
            cout << "ugly" << endl;
            return 0;
        }
    }

    cout << "beautiful" << endl;
    return 0;
}
