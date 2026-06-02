<<<<<<< HEAD
//solution for leetcode
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp=INT32_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            bp=min(prices[i],bp);
            int currProfit=prices[i]-bp;
            maxProfit=max(currProfit,maxProfit);
        }
        return maxProfit;
    }
};
=======
#include<bits/stdc++.h>
using namespace std;

//solution for leetcode
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp=INT32_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            bp=min(prices[i],bp);
            int currProfit=prices[i]-bp;
            maxProfit=max(currProfit,maxProfit);
        }
        return maxProfit;
    }
};
>>>>>>> 5b10a5f (maximum subarray sum)
