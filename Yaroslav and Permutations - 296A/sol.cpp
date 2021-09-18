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
    for (int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        v.emplace_back(temp);
    }
    sort(v.begin(), v.end());
    int continuous, maxContinuous;
    continuous = maxContinuous = 1;
    for (int i = 1; i < n; ++i)
    {
        if (v[i] == v[i-1])
        {
            continuous ++;
            maxContinuous = max(continuous, maxContinuous);
        }
        else
            continuous = 1;
    }
    cout << ((maxContinuous <= (n+1)/2)? "YES" : "NO");
    return 0;
}
