/* Muhammad Selim */
#include <bits/stdc++.h>

#define ll long long int
using namespace std;
void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
    Fast();
    int n; cin >> n;
    while (n --)
    {
        string s; cin >> s;
        int len = s.size()-1, ans = INT16_MAX;
        for (auto &it : {"00", "25", "50", "75"})
        {
            int current = 1, counter = 0;
            for (int i = len; i >= 0; i--)
            {
                if (s[i] == it[current])
                    current --;
                else
                    counter ++;
                if (current < 0)
                    break;
            }
            ans = min(ans, counter);
        }
        cout << ans << "\n";
    }
    return 0;
}