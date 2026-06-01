#include<iostream> 
#include<vector>
#include<climits>
using namespace std;

int trap(vector<int>& height){
    
    int trappedWater=0;
    int left=0;
    int right=height.size()-1;
    while(left<right){
        int leftMax=0;
        int rightMax=0;
        if(height[left]<height[right]){
            leftMax=max(height[left],leftMax);
            trappedWater += leftMax-height[left];
            left--;
        }else{
            rightMax=max(rightMax,height[right]);
            trappedWater += rightMax-height[right];
            right--;
        }
    }
    return trappedWater;
}

int main(){
    vector<int> height={4,2,0,3,2,5};
    cout<<trap(height);
    return 0;
}