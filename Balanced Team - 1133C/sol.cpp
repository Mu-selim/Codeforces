/* Muhammad Selim */
#include <iostream>
#include <bits/stdc++.h>
#include<numeric>
#include <algorithm>
#define ll long long int
using namespace std;
void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
void File_Input()
{
    freopen("fuel.in", "r", stdin);
}
void File_Output()
{
    freopen("output.txt", "w", stdout);
}


int main()
{
    Fast(); //File_Input();
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        v.emplace_back(temp);
    }
    sort(v.begin(), v.end());
    auto it1 = v.begin(), it2 = v.begin();
    int maxx = 0, temp = 0;
    while (it2 != v.end())
    {
        if(abs(*it2 - *it1) <= 5)
        {
            temp = abs(it2 - it1) + 1;
            it2 ++;
        }
        else
        {
            it1 ++;
        }
        maxx = max(maxx, temp);
    }
    cout << maxx;
    return 0;
}
