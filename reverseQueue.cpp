#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverseQueue(q);
    return 0;
}