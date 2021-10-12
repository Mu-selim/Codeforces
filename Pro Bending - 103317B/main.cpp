/* Muhammad Selim */
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
    int n, k; cin >> n >> k;
    set<int> s;
    for (int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        s.emplace(temp);
    }
    auto it = s.end(); it--;
    if (*it < k)
        cout << "Easy Win!";
    else
        cout << "Difficult Loss";
    return 0;
}