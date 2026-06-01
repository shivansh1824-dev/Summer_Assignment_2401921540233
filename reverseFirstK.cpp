#include <bits/stdc++.h>
using namespace std;

queue<int> reverseFirstK(queue<int> q, int k)
{
    stack<int> s;
    queue<int> qAns;
    int n = q.size();
    if (k > n)
        return q;
    for (int i = 0; i < k; i++)
    {
        int val = q.front();
        s.push(val);
        q.pop();
    }
    while (!s.empty())
    {
        qAns.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        qAns.push(q.front());
        q.pop();
    }
    return qAns;
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverseFirstK(q, 3);
    return 0;
}