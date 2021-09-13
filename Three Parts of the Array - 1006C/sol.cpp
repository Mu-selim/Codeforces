#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
void File_Input()
{
    freopen("consistency_chapter_1_validation_input.txt", "r", stdin);
}
void File_Output()
{
    freopen("output.txt", "w", stdout);
}

int main()
{
    Fast(); // File_Input(); File_Output();
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        ll temp; cin >> temp;
        v.emplace_back(temp);
    }
    auto it_left = v.begin(), it_right = v.end()-1;
    ll sum_lef = 0, sum_right = 0, res = 0;
    while (it_left != it_right+1)
    {
        if (sum_lef <= sum_right)
        {
            sum_lef += *it_left;
            it_left ++;
        }
        else
        {
            sum_right += *it_right;
            it_right --;
        }
        if (sum_right == sum_lef)
            res = sum_right;
    }
    cout << res;
}
