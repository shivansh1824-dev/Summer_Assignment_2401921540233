#include <bits/stdc++.h>
using namespace std;

vector<int> nextLargerElement(vector<int> &arr)
{
    int n = arr.size();
    stack<int> s;
    vector<int> ans;
    s.push(arr[n - 1]);
    ans[n - 1] = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > s.top())
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    nextLargerElement(arr);
    return 0;
}