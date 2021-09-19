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
    vector<int> v;
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        v.emplace_back(temp);
        sum += temp;
    }
    sort(v.rbegin(), v.rend());
    int m; cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int temp; cin >> temp;
        cout << sum - v[temp-1] << "\n";
    }
    return 0;
}
