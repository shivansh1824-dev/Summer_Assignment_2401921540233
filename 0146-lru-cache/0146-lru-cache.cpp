class Node {
public:
    int key, val;
    Node* prev;
    Node* next;

    Node(int k, int v) {
        key = k;
        val = v;
        prev = next = NULL;
    }
};
class LRUCache {
private:
    int capacity;
    unordered_map<int, Node*> m;
    Node* head;
    Node* tail;
public:
    void removeNode(Node* node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
    void addFront(Node* newNode){
        newNode->next=head->next;
        head->next->prev=newNode;
        head->next=newNode;
        newNode->prev=head;
    }
    LRUCache(int capacity) {
        this->capacity=capacity;
        head=new Node(0,0);
        tail=new Node(0,0);
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(m.find(key)==m.end()){
            return -1;
        }
        Node* node=m[key];
        removeNode(node);
        addFront(node);
        return node->val;
    }
    
    void put(int key, int value) {
        if(capacity==0) return;
        if(m.find(key) != m.end()){
            Node* node = m[key];
            removeNode(node);
            node->val=value;
            addFront(node);
        }else{
            if(m.size()==capacity){
                Node* lru=tail->prev;
                removeNode(lru);
                m.erase(lru->key);
                delete lru;
            }
            Node* newNode=new Node(key,value);
            addFront(newNode);
            m[key]=newNode;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */