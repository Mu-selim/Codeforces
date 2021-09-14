#include <bits/stdc++.h>
#define ll long long
using namespace std;

void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
void File_Input()
{
    freopen("", "r", stdin);
}
void File_Output()
{
    freopen("", "w", stdout);
}

ll solve()
{
    ll n, k; cin >> n >> k;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll temp; cin >> temp;
        v.emplace_back(temp);
    }
    string s; cin >> s;
    ll ans = 0;
    for (ll i = 0, j = 0; i < n; i = j)
    {
        while (s[i] == s[j] and j < n)
            j ++;
        sort(v.begin()+i, v.begin()+j);
        reverse(v.begin()+i, v.begin()+j);
        ll temp = min(j, i + k);
        for (ll l = i; l < temp; ++l)
            ans += v[l];
    }
    return ans;
}

int main()
{
    Fast();
    //File_Input(); File_Output();
    cout << solve() << "\n";
    return 0;
}
