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
        ll n, x; cin >> n >> x;
        vector<ll> v, sortedv;
        for (ll i = 0; i < n; i++)
        {
            ll temp; cin >> temp;
            v.emplace_back(temp);
            sortedv.emplace_back(temp);
        }
        if (n >= 2*x)
        {
            cout << "YES\n";
            continue;
        }
        sort(sortedv.begin(), sortedv.end());
        bool status = true;
        for (ll i = 0; i < n; i++)
        {
            if (i < x && i > n-x-1 && v[i] != sortedv[i])
            {
                status = false;
                break;
            }
        }
        if (status)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}