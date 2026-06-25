#include<bits/stdc++.h>
using namespace std;

//leetcode solution of 94
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL){
            return {};
        }
        vector<int> leftTree=inorderTraversal(root->left);
        ans.insert(ans.end(),leftTree.begin(),leftTree.end());
        ans.push_back(root->val);
        vector<int> rightTree=inorderTraversal(root->right);
        ans.insert(ans.end(),rightTree.begin(),rightTree.end());

        return ans;
    }
};