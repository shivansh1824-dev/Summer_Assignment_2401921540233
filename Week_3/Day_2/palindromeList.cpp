#include<bits/stdc++.h>
using namespace std;

//leetcode solution 0f 234
class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr != NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=reverseList(slow);
        ListNode* former=head;
        ListNode* latter=slow;

        while(latter){
            if(former->val != latter->val){
                return false;
            }
            former=former->next;
            latter=latter->next;
        }
        return true;
    }
};