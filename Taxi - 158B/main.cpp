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
    int n; cin >> n;
    vector<int> freq(5);
    for (int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        freq[temp] ++;
    }
    int counter  = freq[4] + freq[3] + (freq[2] / 2);
    freq[1] -= freq[3];
    if (freq[2] % 2 == 1)
    {
        counter ++;
        freq[1] -= 2;
    }
    if (freq[1] > 0)
        counter += (freq[1]+3) / 4;
    cout << counter;
    return 0;
}
