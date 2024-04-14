/*
ya que madhe aaplyala ek string dileli aahe, jya madhe tya string madhle words '.' ni seperated aahe.
aaplyala har ek alternate words (means '.' chya nntr che) la replace krayche aahe with "xyz" without using any inbuilt functions.
*/

/*
Example :-
    Input 1 ==> i.like.the.way.you.smile
    Output 1 ==> i.xyz.the.xyz.you.xyz

    Input 2 ==> i.like.the.way.you.smile.akhi
    Output 2 ==> i.xyz.the.xyz.you.xyz.akhi
*/

#include <bits/stdc++.h>
using namespace std;

string solve(string inp)
{
    string ans = "";
    bool start = false;

    for (auto &ch : inp)
    {
        if (start == false)
        {
            ans.push_back(ch);
            if (ch == '.')
            {
                ans += "xyz";
                start = !start;
            }
        }
        else
        {
            if (ch == '.')
            {
                ans.push_back('.');
                start = !start;
            }
        }
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;
    string answer = solve(s);

    cout << answer << endl;
}