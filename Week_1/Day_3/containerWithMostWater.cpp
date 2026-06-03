#include <bits/stdc++.h>
using namespace std;

// solution for leetcode 11
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int start = 0;
        int end = height.size() - 1;
        int currArea;
        int maximumArea = INT32_MIN;
        while (start < end)
        {
            if (height[start] < height[end])
            {
                currArea = min(height[start], height[end]) * (end - start);
                start++;
            }
            else
            {
                currArea = min(height[start], height[end]) * (end - start);
                end--;
            }
            maximumArea = max(maximumArea, currArea);
        }
        return maximumArea;
    }
};