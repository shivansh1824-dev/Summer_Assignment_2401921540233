#include <bits/stdc++.h>
using namespace std;

vector<int> findTwoElement(vector<int> &arr)
{
    int n = arr.size();
    int repeating = -1;
    int missing = -1;
    vector<int> freq(n, 0);
    vector<int> ans;
    for (int x : arr)
    {
        freq[arr[x]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[i] == 2)
        {
            repeating = arr[i];
        }
        if (freq[i] = -1)
        {
            missing = arr[i];
        }
    }
    ans.push_back(repeating);
    ans.push_back(missing);
    return ans;
}