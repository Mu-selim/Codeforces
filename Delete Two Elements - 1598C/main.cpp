/* Muhammad Selim */
#include <bits/stdc++.h>

#define ll long long int
using namespace std;
void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    ll sum = 0;
    map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        sum += v[i];
        m[v[i]] ++;
    }
    sum *= 2;
    if (sum % n)
        cout << "0\n";
    else
    {
        ll q = sum / n;
        ll pre = 0;

        for(int i = 0; i < n; ++i)
        {
            pre = pre + m[q - v[i]];
            if(q == 2 * v[i])
                pre --;
        }

        cout << pre / 2 << '\n';
    }
}

int main()
{
    Fast();
    int t; cin >> t;
    while (t --)
    {
        solve();
    }
    return 0;
}
