/* Muhammad Selim */
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

struct EatCounter
{
    int countEat, countwWait;
    void start()
    {
        countEat = 0;
        countwWait = 0;
    }
};

int main()
{
    Fast(); //File_Input();
    int n; cin >> n;
    EatCounter A, B;
    A.start(); B.start();

    deque<int> d;
    for (int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        d.emplace_back(temp);
    }
    while (d.size() != 0)
    {
        if(A.countwWait != 0)
            -- A.countwWait;

        if(B.countwWait != 0)
            -- B.countwWait;

        if(A.countwWait == 0)
        {
            ++ A.countEat;
            A.countwWait = *d.begin();
            d.pop_front();
        }

        if(B.countwWait == 0)
        {
            if(d.size() != 0)
            {
                ++ B.countEat;
                B.countwWait = d.back();
                d.pop_back();
            }
            else
                break;
        }
    }
    cout << A.countEat << " " << B.countEat << "\n";
    return 0;
}
