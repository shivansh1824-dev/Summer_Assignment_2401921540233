#include <bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int> &a, int m)
{
    int n = a.size();
    sort(a.begin(), a.end());
    int i = 0;
    int j = i + m - 1;
    int minDiff = INT32_MAX;
    int currDiff;
    while (j < n)
    {
        currDiff = a[j] - a[i];
        minDiff = min(minDiff, currDiff);
        i++;
        j++;
    }
    return minDiff;
}

int main()
{
    vector<int> a = {3, 4, 1, 9, 56, 7, 9, 12};
    cout << findMinDiff(a, 5);
    return 0;
}