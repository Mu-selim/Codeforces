/* Muhammad Selim */
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
    ll t; cin >> t;
    while (t --)
    {
        int num; cin >> num;
        char array[2][num];
        for (int i = 0; i < 2; i++)
        {
            for(int j = 0; j < num; j++)
                cin >> array[i][j];
        }
        bool status = true;
        for(int i = 0; i < num; i++)
        {
            if(array[1][i]== '1' && array[0][i]=='1')
                status = false;
        }
        if(status)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
