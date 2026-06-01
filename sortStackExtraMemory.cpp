#include <bits/stdc++.h>
using namespace std;

void sortStack(stack<int> &st)
{
    vector<int> v;
    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    sort(v.begin(), v.end());
    for (int x : v)
    {
        st.push(x);
    }
}