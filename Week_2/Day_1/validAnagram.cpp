#include<bits/stdc++.h>
using namespace std;

//leetcode solution for 242
class Solution {
public:
    bool isAnagram(string s, string t) {
       int count[26]={0};
        for(char ch:s){
            count[ch-'a']++;
        }

        for(char chh:t){
            count[chh-'a']--;
        }
        for(int k=0;k<26;k++){
            if(count[k]!=0){
                return false;
            }
        }return true; 
    }
};