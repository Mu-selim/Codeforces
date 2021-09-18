#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

const int max_size = 100010;
ll freq1[max_size], freq2[max_size];
int main()
{
    Fast();
    string s, temp = ""; cin >> s;
    for (auto &i : s)
    {
        int num = i - 48;
        if (num >= 5)
            temp += to_string(9-num);
        else
            temp += i;
    }
    if (temp[0] == '0')
        temp[0] = s[0];
    cout << temp;
    return 0;
}
