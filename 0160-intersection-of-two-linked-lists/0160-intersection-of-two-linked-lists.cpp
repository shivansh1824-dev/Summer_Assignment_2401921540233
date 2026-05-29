/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getSize(ListNode* head){
        ListNode* temp=head;
        int sz=0;
        while(temp!=NULL){
            sz++;
            temp=temp->next;
        }
        return sz;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int szA=getSize(headA);
        int szB=getSize(headB);
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        int diff=abs(szA-szB);
        if(szA > szB){
            while(diff--){
                tempA=tempA->next;
            }
        }else{
            while(diff--){
                tempB=tempB->next;
            }
        }
        while(tempA && tempB){
            if(tempA == tempB){
                return tempA;
            }
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return NULL;
    }
};