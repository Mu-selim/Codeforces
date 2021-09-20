#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
string solve()
{
    int n; cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        a.emplace_back(temp);
    }
    for (int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        b.emplace_back(temp);
    }
    if (*a.begin() != *b.begin())
        return "NO\n";
    bool positive = false, negative = false, status = false;
    if (*a.begin() == 1)
        positive = true;
    else if (*a.begin() == -1)
        negative = true;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] > b[i])
        {
            if (!negative)
                status = true;
        }
        else if (a[i] < b[i])
        {
            if (!positive)
                status = true;
        }
        if (a[i] == 1)
            positive = true;
        else if (a[i] == -1)
            negative = true;
    }
    if (status)
        return "NO\n";
    else
        return "YES\n";
}

int main()
{
    Fast();
    int T; cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cout << solve();
    }
    return 0;
}
