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
    ll n, k; cin >> k >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    ll ans, position;
    ans = position = 0;
    for (int i = 0; i < n; ++i)
    {
        if (position < v[i])
            ans ++;
        position += k - v[i];
    }
    cout << ans;
}

int main()
{
    Fast();
    ll n; cin >> n;
    while (n --)
    {
        solve();
        cout << "\n";
    }
    return 0;
}