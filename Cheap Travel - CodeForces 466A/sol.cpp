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
    Fast(); 
    int n, m, a, b; cin >> n >> m >> a >> b;
    if(m*a <= b)
        cout << n*a;
    else
    {
        int x = (n % m) * a;
        int sol1 = (n / m * b) + b, sol2 = (n / m * b) + x;
        cout << min(sol1, sol2);
    }
    return 0;
}
