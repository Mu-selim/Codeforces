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
    freopen("consistency_chapter_1_validation_input.txt", "r", stdin);
}
void File_Output()
{
    freopen("output.txt", "w", stdout);
}

ll solve()
{
    ll n, d; cin >> n >> d;
    vector<ll> v;
    for (ll i = 0; i < n; ++i)
    {
        ll temp; cin >> temp;
        v.emplace_back(temp);
    }
    ll ans = 0, l = 0;
    for (int i = 2; i < n; ++i)
    {
        while (v[i] - v[l] > d)
            l ++;
        ans += (i-l) * (i-l-1) / 2;
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
