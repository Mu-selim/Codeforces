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
    for (int i = 1; i <= n; ++i)
    {
        cin >> freq1[i];
        freq2[i] = freq1[i];
    }
    sort(freq2+1, freq2+n+1);
    for (int i = 1; i <= n; ++i)
    {
        freq1[i] += freq1[i-1];
        freq2[i] += freq2[i-1];
    }
    int m; cin >> m;
    for (int i = 1; i <= m; ++i)
    {
        int temp, l, r; cin >> temp >> l >> r;
        if (temp == 1)
            cout << freq1[r] - freq1[l-1] << "\n";
        else
            cout << freq2[r] - freq2[l-1] << "\n";
    }
    return 0;
}
