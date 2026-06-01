#include <bits/stdc++.h>
using namespace std;

vector<string> buildArray(vector<int> &target, int n)
{
    vector<string> ans;
    int count = 1;
    int i = 0;
    while (i < target.size())
    {
        if (target[i] == count)
        {
            ans.push_back("Push");
            i++;
        }
        else
        {
            ans.push_back("Push");
            ans.push_back("Pop");
        }
        count++;
    }
    return vector<string>(ans.begin(), ans.end());
}

int main()
{
    vector<int> target = {1, 3};
    buildArray(target, 3);
    return 0;
}