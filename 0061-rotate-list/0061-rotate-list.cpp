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
        int size=0;
        while(curr != NULL){
            curr=curr->next;
            size++;
        }
        return size;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int sz=getSize(head);
        k=k % sz;
        int iterations=(sz-k);
        ListNode* curr=head;
        
        while(curr->next != NULL){
            curr=curr->next;
        }
        curr->next=head;
        
        while(iterations != 0){
            curr=curr->next;
            iterations--;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};