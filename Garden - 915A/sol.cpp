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

int main()
{
    Fast(); //File_Input();
    int n, k; cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        v.emplace_back(temp);
    }
    sort(v.rbegin(), v.rend());
    int hours;
    for (auto &it : v)
    {
        if(k % it == 0)
        {
            hours = k / it;
            break;
        }
    }
    cout << hours;
    return 0;
}
