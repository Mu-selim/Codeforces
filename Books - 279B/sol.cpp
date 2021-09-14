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
    ll n, t; cin >> n >> t;
    vector<ll> v;
    for (int i = 0; i < n; ++i)
    {
        ll temp; cin >> temp;
        v.emplace_back(temp);
    }
    ll l, r, maximum, temp;
    l = r = maximum = temp = 0;
    while (r < n)
    {
        temp += v[r++];
        while (temp > t)
            temp -= v[l++];
        maximum = max(maximum, r-l);
    }
    return maximum;
}
int main()
{
    Fast();
    //File_Input(); File_Output();
    cout << solve() << "\n";
    return 0;
}
