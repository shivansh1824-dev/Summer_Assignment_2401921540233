/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getSize(ListNode* head){
        ListNode* curr=head;
        int count=0;
        while(curr != NULL){
            curr=curr->next;
            count++;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        int size=getSize(head);

        if(n==size){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }

        
        for(int i=1;i<=size-n;i++){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        return head;
    }
};