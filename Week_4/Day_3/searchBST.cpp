#include<bits/stdc++.h>
using namespace std;

//leetcode solution of 700
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root != NULL) {
            if (root->val == val)
                return root;

            if (val < root->val)
                root = root->left;
            else
                root = root->right;
        }

        return NULL;
    }
};