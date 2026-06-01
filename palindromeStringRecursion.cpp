#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s, int start = 0, int end)
{
    if (start < end)
        return false;
    if (s[start] != s[end])
    {
        return false;
    }
    return palindrome(s, start++, end--);
}

int main()
{
    string s = "absddsba";
    int end = s.length();
    palindrome(s, start, end);
    return 0;
}