/* Muhammad Selim */
#include <bits/stdc++.h>

#define ll long long int
using namespace std;
void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

ll n, k;
vector<ll> needed(1e5+1), there(1e5+1);

bool check(ll x)
{
    ll temp = k;
    for (int i = 0; i < n; ++i)
    {
        ll need = needed[i] * x;
        if(need > there[i])
            temp -= (need - there[i]);

        if(temp < 0)
            return false;
    }
    return true;
}

int main()
{
    Fast();
    cin >> n >> k;
    for (ll i = 0; i < n; ++i)
    {
        cin >> needed[i];
    }
    for (ll i = 0; i < n; ++i)
    {
        cin >> there[i];
    }

    ll counter = 0;
    ll left = 0, right = 2e9+1;
    while (left <= right)
    {
        ll mid = (left+right) / 2;
        if (check(mid))
        {
            counter = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    cout << counter;
    return 0;
}