class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0;
        int maxSubarraySum=INT_MIN;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            currSum += nums[i];
            maxSubarraySum=max(maxSubarraySum,currSum);
            if(currSum<0){
                currSum=0;
            }
        }
        return maxSubarraySum;
    }
};