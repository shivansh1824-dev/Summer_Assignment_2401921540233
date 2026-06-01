#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head=NULL;
        tail=NULL;
    }

    void pushFront(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }

    void pushBack(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void printList(){
        Node* temp=head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

    void insertAtPos(int val,int pos){
        Node* newNode=new Node(val);
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }

    /*~List(){
        Node* temp = head;

        while(temp != NULL){
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }*/

    void popFront(){
        Node* temp=head;
        if(head==NULL){
            cout<<"Empty list.";
            return;
        }else{
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }

    void popBack(){
        Node* temp=head;
        Node* toDel=temp->next->next;
        if(head==NULL){
            cout<<"Empty list.";
            return;
        }else{
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            temp->next=NULL;
            delete toDel;
        }
    }

    int searchItr(int key){
        Node* temp=head;
        int idx=0;
        while(temp != NULL){
            if(temp->data==key){
                cout<<idx<<endl;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }

    void reverseList(){
        Node* curr=head;
        Node* prev=NULL;

        while(curr != NULL){
            Node*next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        head=prev;
    }

    int getSize(){
        int sz=0;
        Node* temp=head;
        while(temp != NULL){
            temp=temp->next;
            sz++;
        }
        cout<<sz<<endl;
    }

    void removeNthFromEnd(int n){
        int x=getSize();
        Node* curr=head;

        if(x==n){
            Node* toDEl=head;
            head=head->next;
            delete toDEl;
        }
        for(int i=1;i<(x-n);i++){
            curr=curr->next;
        }
        Node* toDel=curr->next;
        curr->next=curr->next->next;
        delete toDel;
    }
};

int main(){
    List ll;

    ll.pushFront(5);
    ll.pushFront(4);
    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);
    ll.insertAtPos(6,3);
    ll.popFront();
    
    
    ll.printList();
    ll.removeNthFromEnd(1);
    return 0;
}