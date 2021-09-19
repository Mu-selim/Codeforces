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
    int s, n; cin >> s >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i)
    {
        int x, y; cin >> x >> y;
        v.emplace_back(x, y);
    }
    sort(v.begin(), v.end());
    bool flag = false;
    for (int i = 0; i < n; ++i)
    {
        if (s > v[i].first)
            s += v[i].second;
        else
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
