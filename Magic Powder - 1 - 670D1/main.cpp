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
    vector<int> needed(n), find(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> needed[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> find[i];
    }

    int counter = 0;
    while (true)
    {
        for (int i = 0; i < n; ++i)
        {
            if(find[i] >= needed[i])
                find[i] -= needed[i];
            else
            {
                k -= needed[i] - find[i];
                find[i] = 0;
            }
        }

        if(k >= 0)
            counter ++;
        else
            break;
    }
    cout << counter;
    return 0;
}