/* Muhammad Selim */
#include <bits/stdc++.h>

#define ll long long int
using namespace std;
void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int solve(int n)
{
    set<int> s;
    while (n % 2 == 0)
    {
        s.emplace(2);
        n /= 2;
    }
    int sq = int(sqrt(n));
    for (int i = 3; i <= sq; i+= 2)
    {
        while (n % i == 0)
        {
            s.emplace(i);
            n /= i;
        }
    }
    if (n > 2)
        s.emplace(n);
    if (s.size() == 2)
        return 1;
    else
        return 0;
}

int main()
{
    Fast();
    int n; cin >> n;
    if (n < 6)
    {
        cout << 0;
        return 0;
    }
    int counter = 0;
    for (int i = 6; i <= n; ++i)
    {
        counter += solve(i);
    }
    cout << counter;
    return 0;
}