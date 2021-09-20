#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
    Fast();
    int n, counter = 0; cin >> n;
    while(n --)
    {
        int p, q; cin >> p >> q;
        if (q - p >= 2)
            counter ++;
    }
    cout << counter;
    return 0;
}
