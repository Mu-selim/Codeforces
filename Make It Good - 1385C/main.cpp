#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int solve()
{
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        a.emplace_back(temp);
    }
    auto it = n-1;
    while (it > 0 && a[it] <= a[it-1])
        it --;
    while (it > 0 && a[it] >= a[it-1])
        it --;
    return it;
}

int main()
{
    Fast();
    int T; cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cout << solve() << "\n";
    }
    return 0;
}
