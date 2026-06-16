#include<bits/stdc++.h>
using namespace std;

//leetcode solution 0f 21
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* left=list1;
        ListNode* right=list2;
        ListNode* ans=new ListNode(0);
        ListNode* head=ans;
        while(left!=NULL && right!=NULL){
            if(left->val <= right->val){
                ans->next=left;
                left=left->next;
                ans=ans->next;
            }else{
                ans->next=right;
                right=right->next;
                ans=ans->next;
            }
        }
        while(left!=NULL){
            ans->next=left;
            left=left->next;
            ans=ans->next;
        }
        while(right!=NULL){
            ans->next=right;
            right=right->next;
            ans=ans->next;
        }
        return head->next;
    }
};