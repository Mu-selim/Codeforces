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
    deque<int> d(n);
    for(int i = 0; i < n; i++)
        cin >> d[i];
    int sereja, dima;
    sereja = dima = 0;
    int l = 0, r = n-1;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            if(d[l] > d[r])
                sereja += d[l++];
            else
                sereja += d[r--];
        }
        else
        {
            if(d[l] > d[r])
                dima += d[l++];
            else
                dima += d[r--];
        }
    }
    cout << sereja << " " << dima;
    return 0;
}
