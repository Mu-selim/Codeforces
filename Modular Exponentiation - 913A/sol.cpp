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
    ll n, m; cin >> n >> m;
    n = pow(2, n);
    cout << m % n;
    return 0;
}
