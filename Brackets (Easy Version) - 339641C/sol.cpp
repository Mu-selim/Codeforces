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
    string s; cin >> s;
    if(s.empty())
        cout << "YES\n";
    else
    {
        int counter = 0, openLeft = 0, openRight = 0;
        for (auto &i: s)
        {
            if(i == '(')
            {
                counter ++;
                openRight ++;
            }
            else if(i == ')' && counter > 0)
                counter --;
            if(i == ')')
                openLeft ++;
        }
        if(counter == 0 and openLeft == openRight)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
