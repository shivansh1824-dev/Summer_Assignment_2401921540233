#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    set<int> s;
    for (int i : nums)
    {
        if (s.find(i) != s.end())
        {
            return i;
        }
        else
        {
            s.insert(i);
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 1, 3, 4, 2};
    cout << findDuplicate(nums);
    return 0;
}