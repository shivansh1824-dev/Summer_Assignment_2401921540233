#include <bits/stdc++.h>
using namespace std;

bool checkRedundancy(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ')')
        {
            st.push(s[i]);
        }
        else
        {
        }
    }
    return st.top() == '(';
}

int main()
{
    string s = "((a+b))";
    cout << checkRedundancy(s);
    return 0;
}