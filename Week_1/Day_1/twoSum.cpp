<<<<<<< HEAD
//solution for leetcode
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(m.find(target-nums[i])!=m.end()){
                return {m[target-nums[i]],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};
=======
#include<bits/stdc++.h>
using namespace std;

//solution for leetcode
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(m.find(target-nums[i])!=m.end()){
                return {m[target-nums[i]],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};
>>>>>>> 5b10a5f (maximum subarray sum)
