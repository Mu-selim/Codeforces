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

ll GCD(ll a, ll b)
{
    return __gcd(a, b);
}

void LCM_GCD(ll a, ll b)
{
    ll gcd = GCD(a, b);
    cout << gcd << " " << (a/gcd) * b;
}

int AlmostPrime(ll n)
{
    set<ll> s;
    while (n % 2 == 0)
    {
        s.emplace(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            s.emplace(i);
            n = n/i;
        }
    }
    if (n > 2)
    {
        s.emplace(n);
    }
    return s.size();
}

int main()
{
    Fast(); //File_Input();
    string a, b; cin >> a >> b;
    if(a == b)
        cout << a;
    else
        cout << "1";
    return 0;
}