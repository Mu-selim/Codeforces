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
    int a, b, c, d; cin >> a >> b >> c >> d;
    vector<int> v = {a, b, c, d};
    sort(v.rbegin(), v.rend());
    if ((a == v[0] && b == v[1]) || (a == v[1] && b == v[0]))
        return "NO";
    else if ((c == v[0] && d == v[1]) || (c == v[1] && d == v[0]))
        return "NO";
    return "YES";
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
