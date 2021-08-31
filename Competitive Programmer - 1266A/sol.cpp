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
    ll t, temp = 0; cin >> t;
    while (t --)
    {
        ll sum = 0, counter = 0; bool zeros = false;
        string s; cin >> s;
        for (char i : s)
        {
            temp = i - '0';
            if (temp % 2 == 0)
                counter ++;
            if (temp == 0)
                zeros = true;
            sum += temp;
        }

        if (sum % 3 == 0 and counter > 1 and zeros)
            cout << "red\n";
        else
            cout << "cyan\n";
    }
    return 0;
}
