#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++)
    {
        int N;
        cin >> N;

        vector<long long> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        vector<long long> prefixMax(N);
        long long mx = 0;
        for (int i = 0; i < N; i++)
        {
            prefixMax[i] = mx;
            mx = max(mx, A[i]);
        }

        vector<long long> suffixMin(N);
        long long mn = LLONG_MAX;
        for (int i = N - 1; i >= 0; i--)
        {
            suffixMin[i] = mn;
            mn = min(mn, A[i]);
        }

        int answer = -1;
        for (int i = 0; i < N; i++)
        {
            if (A[i] > prefixMax[i] && A[i] < suffixMin[i])
            {
                answer = i + 1;
                break;
            }
        }

        cout << "Case " << tc << ": ";
        if (answer == -1)
            cout << "Humanity is doomed!\n";
        else
            cout << answer << "\n";
    }
    return 0;
}