class LRUCache {
public:
    struct Node {
        int key;
        int val;
        Node* next;
        Node* prev;

        Node(int k, int v) : key(k), val(v), prev(nullptr), next(nullptr) {}
    };

    unordered_map<int,Node*> map;
    
    Node* head;
    Node* tail;
    int cap;

    LRUCache(int capacity): cap(capacity) {
        head = new Node(0, 0); // class members
        tail = new Node(0, 0);
        head->next = tail;
        tail->prev = head;
    }

    void remove(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insert_at_tail(Node* node){
        node->prev = tail->prev;
        node->next = tail;
        tail->prev->next = node;
        tail->prev = node;
    }

    int get(int key) {
        if(map.find(key)!=map.end()){
            remove(map[key]);
            insert_at_tail(map[key]);
            
            return map[key]->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(map.find(key) != map.end()) {
            Node* node = map[key];
            node->val = value;
            remove(node);
            insert_at_tail(node);
        } else {
            Node* node = new Node(key, value);
            map[key] = node;
            insert_at_tail(node);

            if(map.size() > cap) {
                Node* lru = head->next;
                remove(lru);
                map.erase(lru->key);
                delete lru;
            }
        }
    }
};
