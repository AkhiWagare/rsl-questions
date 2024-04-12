/*
Given an encoded string, return its decoded string.
The encoding rule is ‘k[encoded_string]’, where the ‘encoded_string’ inside the square brackets is being repeated exactly ‘k’ times.

You may assume that ‘encoded_string’ will only consist of lower case alphabets and ‘k’ will always be greater than 0.
Note: The ‘encoded_string’ can be nested as well. Refer example 2 for clarification.
*/

#include <bits/stdc++.h>
using namespace std;

string solve(string inp)
{
    int freq = 0;
    string ans = "";
    stack<string> res_st;
    stack<int> freq_st;

    for (auto &ch : inp)
    {

        if (ch >= '0' and ch <= '9')
            freq = (freq * 10) + (ch - 48);
        else if (ch >= 'a' and ch <= 'z')
            ans += ch;
        else if (ch == '[')
        {
            freq_st.push(freq);
            res_st.push(ans);
            ans = "";
            freq = 0;
        }
        else if (ch == ']')
        {
            int rep = freq_st.top();
            freq_st.pop();

            string str = res_st.top();
            res_st.pop();

            while (rep--)
            {
                str += ans;
            }

            ans = str;
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
