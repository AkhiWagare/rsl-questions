/*
Write a program to find the equilibrium element from an integer array. 
An equilibrium element is defined as the number for which, 
the sum of left side elements is equal to sum of right side elements.
Note: If no possible combination exists return 0.
*/

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> vec)
{
    int sum = 0;
    for (auto &el : vec)
        sum += el;

    int tmp = 0;

    for (auto &el : vec)
    {
        if (sum - tmp - el == tmp)
            return el;

        tmp += el;
    }

    return 0;
}

int main()
{
    vector<int> vec{1, 7, 5, 2, 6};
    int ans = solve(vec);
    cout << ans << endl;
}
