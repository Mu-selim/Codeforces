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
    int n, current; cin >> n >> current;
    vector<int> total;
    for (int i = 1; i <= n; ++i)
    {
        int seller; cin >> seller;
        bool flag = false;
        for (int j = 0; j < seller; ++j)
        {
            int temp; cin >> temp;
            if (current > temp)
                flag = true;
        }
        if (flag)
            total.emplace_back(i);
    }
    cout << total.size() << "\n";
    for (auto &it : total)
        cout << it << " ";
    return 0;
}