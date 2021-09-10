#include <iostream>
#include <bits/stdc++.h>
#include<numeric>
#include <algorithm>
#define ll long long int
using namespace std;
void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
void File_Input()
{
    freopen("fuel.in", "r", stdin);
}
void File_Output()
{
    freopen("output.txt", "w", stdout);
}

ll GCD(ll a, ll b)
{
    return __gcd(a, b);
}

void LCM_GCD(ll a, ll b)
{
    ll gcd = GCD(a, b);
    cout << gcd << " " << (a/gcd) * b;
}

int AlmostPrime(ll n)
{
    set<ll> s;
    while (n % 2 == 0)
    {
        s.emplace(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            s.emplace(i);
            n = n/i;
        }
    }
    if (n > 2)
    {
        s.emplace(n);
    }
    return s.size();
}

int main()
{
    Fast(); //File_Input();
    int t; cin >> t;
    while (t --)
    {
        ll n; cin >> n;
        vector<ll> v;
        for(ll i = 0; i < n; i++)
        {
            ll temp; cin >> temp;
            v.emplace_back(temp);
        }
        ll ans = 0, rightMinimum = INT_MAX;
        for (ll i = n-1; i >= 0; --i)
        {
            if(v[i] > rightMinimum)
                ans ++;
            rightMinimum = min(rightMinimum, v[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}