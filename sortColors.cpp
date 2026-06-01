#include<bits/stdc++.h>
using namespace std;

vector<int> sortColors(vector<int>& nums){
    int redCount=0,whiteCount=0,blueCount=0;
    vector<int> v;
    for(int x:nums){
        if(x==0){                
            redCount++;
        }else if(x==1){
            whiteCount++;
        }else{
            blueCount++;
        }
    }

    for(int i=0;i<redCount;i++){
        v.push_back(0);
    }
    for(int i=0;i<whiteCount;i++){
        v.push_back(1);
    }
    for(int i=0;i<blueCount;i++){
        v.push_back(2);
    }
    return v;
}

//This piece of code is true for real life problems.But in this problem we dont need to
//return a vector as return type is void.
//we have to perform inplace operations on nums vector here.

class Solution {
public:
    void sortColors(vector<int>& nums){
        int redCount=0,whiteCount=0,blueCount=0;
        int idx=0;
        for(int x:nums){
            if(x==0){
                redCount++;
            }else if(x==1){
                whiteCount++;
            }else{
                blueCount++;
            }
        }

        while(redCount>0){
            nums[idx++]=0;
            redCount--;
        }
        while(whiteCount>0){
            nums[idx++]=1;
            whiteCount--;
        }
        while(blueCount>0){
            nums[idx++]=2;
            blueCount--;
        }
    }
};
