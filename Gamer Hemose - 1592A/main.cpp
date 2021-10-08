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
    ll t; cin >> t;
    while (t --)
    {
        ll n, h; cin >> n >> h;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll temp; cin >> temp;
            v.emplace_back(temp);
        }
        sort(v.rbegin(), v.rend());
        ll ans = 2 * (h / (v[0]+v[1]));
        if (h % (v[0]+v[1]) == 0)
            cout << ans << "\n";
        else if (h % (v[0]+v[1]) <= v[0])
            cout << ans + 1 << "\n";
        else
            cout << ans + 2 <<  "\n";
    }
    return 0;
}
