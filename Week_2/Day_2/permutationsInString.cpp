#include<bits/stdc++.h>
using namespace std;

//added solution of 567
class Solution {
public:
    bool checkInclusion(string s1, string s2){
        int k=s1.length();
        if(s1.length()>s2.length()) return false;
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        for(int i=0;i<k;i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        if(v1==v2) return true;
        for(int i=k;i<s2.length();i++){
            v2[s2[i]-'a']++;
            v2[s2[i-k]-'a']--;
            if(v1==v2) return true;
        }
        return false;
    }
};