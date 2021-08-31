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

int main()
{
    Fast(); //File_Input();
    ll n, k; cin >> n >> k;
    vector<ll> v;
    ll sq = sqrt(n);
    for (ll i = 1; i <= sq; ++i)
    {
        if(n % i == 0)
        {
            if(n/i != i)
                v.emplace_back(n/i);
            v.emplace_back(i);
        }
    }
    sort(v.begin(), v.end());
    if(k > v.size())
        cout << "-1\n";
    else
        cout << v[k-1] << "\n";
    return 0;
}
