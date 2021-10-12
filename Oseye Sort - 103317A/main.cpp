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
    int n; char c; cin >> n >> c;
    if(c == 'a')
    {
        for (int i = 1; i <= n; ++i)
        {
            cout << i << " ";
        }
    }
    else
    {
        for (int i = n; i > 0; --i)
        {
            cout << i << " ";
        }
    }
    return 0;
}
