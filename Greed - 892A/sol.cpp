#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

const int max_size = 100010;
ll freq1[max_size], freq2[max_size];
int main()
{
    Fast();
    int n; cin >> n;
    vector<pair<int, int>> v;
    ll sumVolume = 0;
    for (int i = 0; i < n; ++i)
    {
        int a; cin >> a;
        v.emplace_back(0, a);
        sumVolume += a;
    }
    for (int i = 0; i < n; ++i)
    {
        int b; cin >> b;
        v[i].first = b;
    }
    sort(v.rbegin(), v.rend());
    ll sumCapacity = v[0].first + v[1].first;
    if (sumCapacity < sumVolume)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}
