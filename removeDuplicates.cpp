#include<iostream>
#include<vector>
using namespace std;

string removeDuplicateLetters(string s) {
    string ans="";
    int last[26];
    bool used[26]={false};

    for(int i=0;i<s.length();i++){
        last[s[i]-'a']=i;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        
        if(used[ch-'a']) continue;

        while(!ans.empty() && ch<ans.back() && i<last[ans.back()-'a']){
            used[ans.back()-'a']=false;
            ans.pop_back();
        }
        ans.push_back(ch);
        used[ch-'a']=true;
    }
    return ans;
}

int main(){
    string s="cbacdcbc";
    cout<<removeDuplicateLetters(s);
    return 0;
}