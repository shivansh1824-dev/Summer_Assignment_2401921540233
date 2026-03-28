class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int minDiff=INT_MAX;
        int last1=-1;
        int last2=-1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                last1 = i;
                if(last2 != -1){
                    minDiff = min(minDiff, abs(last1 - last2));
                }
            }
            else if(nums[i] == 2){
                last2 = i;
                if(last1 != -1){
                    minDiff = min(minDiff, abs(last1 - last2));
                }
            }
        }
        return (minDiff==INT_MAX) ? -1 : minDiff;
    }
};