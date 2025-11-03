#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt = 1;
    bool dangerous = false;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
            if (cnt >= 7)
            {
                dangerous = true;
                break;
            }
        }
        else
        {
            cnt = 1;
        }
    }

    if (dangerous)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
