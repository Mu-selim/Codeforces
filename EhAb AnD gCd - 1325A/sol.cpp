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
    int t; cin >> t;
    while (t --)
    {
        ll x; cin >> x;
        LCM_GCD(1, x-1);
        cout << "\n";
    }
    return 0;
}
