#include <bits/stdc++.h>
using namespace std;

void sortStack(stack<int> &st)
{
    stack<int> s;
    while (!st.empty() && s.empty())
    {
        s.push(st.top());
        st.pop();
    }
    while (!s.empty())
    {
        if (st.top() > s.top())
        {
            s.push(st.top());
            st.pop();
        }
        int val = s.top();
        s.pop();
        s.push(st.top());
        s.push(val);
    }
    sortStack(st);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    return 0;
}