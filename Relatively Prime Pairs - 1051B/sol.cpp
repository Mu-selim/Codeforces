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
    ll l, r, pairs = 0; cin >> l >> r;
    cout << "YES\n";
    for (ll i = l; i <= r; i+=2)
    {
        cout << i << " " << i+1 <<"\n";
    }
    return 0;
}
