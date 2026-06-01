#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part){
    int k=part.length();
    string ans;
    for(char ch:s){
        ans.push_back(ch);
        if(ans.length()>=k && ans.substr(ans.length()-k)==part){
            ans.erase(ans.length()-k);
        }
    }
    return ans;
}

int main(){
    string s="axxxxyyyyb";
    string part="xy";
    cout<<removeOccurrences(s,part);
    return 0;
}