/*
Given a string ‘s’ consisting only of characters 'a', 'b', and 'c'. You are asked to apply the following algorithm on the string any number of times:
1. Pick a non-empty prefix from the string ‘s’ where all the characters in the prefix are the same.
2. Pick a non-empty suffix from the string ‘s’ where all the characters in this suffix are the same.
3. The prefix and the suffix should not intersect at any index.
4. The characters from the prefix and suffix must be the same.
5. Delete both the prefix and the suffix.
6. Return the minimum length of ‘s’ after performing the above operation any number of times (possibly zero times).
*/

/*
Example :-
    Input 1 ==> ca
    Output 1 ==> 2

    Input 2 ==> aabccabba
    Output 2 ==> 3
*/

#include <bits/stdc++.h>
using namespace std;

int solve(string inp)
{
    int i = 0, j = inp.length() - 1;
    char last = 'x';

    if (inp[i] != inp[j])
        return inp.length();

    char ch = inp[i];

    while ((inp[i] == ch or inp[j] == ch) and (i < j))
    {
        if (inp[i] == ch)
            i++;
        if (inp[j] == ch)
            j--;

        last = ch;
        if (inp[i] == inp[j])
            ch = inp[i];
    }

    if (i == j and ch == last)
        return 0;

    return max(0, j - i + 1);
}

int main()
{
    string s;
    cin >> s;

    int answer = solve(s);
    cout << answer << endl;
}
