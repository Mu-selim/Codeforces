/* Muhammad Selim */
#include <bits/stdc++.h>

#define ll long long int
using namespace std;
void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int prime_divisors(int n)
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

bool check_string(string s)
{
    auto it = s.begin();
    while (it != s.end() && isdigit(*it))
        it ++;

    if( (!s.empty()) && (it == s.end()) )
        return false;
    else
        return true;
}

void solve()
{
    vector<int> v(3);
    int maxi, counter; maxi = counter = 0;
    for (int i = 0; i < 3; ++i)
    {
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }
    counter = count(v.begin(), v.end(), maxi);

    if (counter > 1)
    {
        for (int i = 0; i < 3; ++i)
            cout << maxi-v[i]+1 << " ";
    }
    else
    {
        for (int i = 0; i < 3; ++i)
        {
            if (maxi == v[i])
                cout << "0 ";
            else
                cout << maxi-v[i]+1 << " ";
        }
    }
    cout << "\n";
}

int main()
{
    Fast();
    int n; cin >> n;
    while (n --)
    {
        solve();
    }
    return 0;
}
