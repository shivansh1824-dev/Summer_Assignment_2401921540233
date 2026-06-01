#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        if (mp[arr[i]] == 2)
        {
            ans.push_back(arr[i]);
        }
    }
    return vector<int>(ans.begin(), ans.end());
}