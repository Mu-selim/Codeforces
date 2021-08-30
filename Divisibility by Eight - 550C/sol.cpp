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
    string number; cin >> number;

    bool found = false;
    int answer;

    for(unsigned int i = 0; i < number.size() && !found; i++)
    {
        if(number[i] == '8' || number[i] == '0')
            found = true, answer = number[i] - '0';
    }

    for(unsigned int i = 0; i < number.size() && !found; i++)
    {
        for(unsigned int j = i + 1; j < number.size() && !found; j++)
        {
            int first_digit = number[i] - '0', second_digit = number[j] - '0';
            int number_formed = (10 * first_digit) + second_digit;

            if(number_formed % 8 == 0)
                found = true, answer = number_formed;
        }
    }

    for(unsigned int i = 0; i < number.size() && !found; i++)
    {
        for(unsigned int j = i + 1; j < number.size() && !found; j++)
        {
            for(unsigned int k = j + 1; k < number.size() && !found; k++)
            {
                int first_digit = number[i] - '0', second_digit = number[j]- '0', third_digit = number[k] - '0';
                int number_formed = (100 * first_digit) + (10 * second_digit) + third_digit;

                if(number_formed % 8 == 0)
                {
                    answer = number_formed;
                    found = true;
                }
            }
        }
    }
    if(found)
        printf("YES\n%d\n", answer);
    else
        printf("NO\n");
    return 0;
}
