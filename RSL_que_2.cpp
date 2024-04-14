/*
Binary string vaala que hota, jya madhe aaplyala ek binary string dileli aahe.
tya binary string la aaplyala rearrange kraych aahe, ashya way madhe, jyane krun toh ek maximum possible odd number bnnr.
*/

/*
Example :-
    Input 1 ==> 010
    Output 1 ==> 001

    Input 2 ==> 01010
    Output 2 ==> 10001
*/

#include <bits/stdc++.h>
using namespace std;

string solve(string inp)
{
    int cnt1 = 0, cnt0 = 0;
    string ans = "";
    for (auto &ch : inp)
        ch == '1' ? ++cnt1 : ++cnt0;

    --cnt1;
    while (cnt1--)
        ans.push_back('1');

    while (cnt0--)
        ans.push_back('0');

    ans.push_back('1');

    return ans;
}

int main()
{
    string s;
    cin >> s;

    string answer = solve(s);
    cout << answer << endl;
}