class MyHashMap {
public:
        int key;
        int val;
        MyHashMap* next;
        MyHashMap* head;
        MyHashMap() {
           head = NULL;
        }
    MyHashMap(int k, int v){
       key = k;
       val = v;
       next = NULL;
    }
    
    void put(int key, int val) {
        MyHashMap* newnode = new MyHashMap(key,val);
        //base
        if(head == NULL){
            head = newnode;
        }else{
            //traverse
            MyHashMap* temp = head;
            MyHashMap* prev = NULL;
            while(temp != NULL && temp->key < key){
                prev = temp;
                temp = temp->next;
            }
            //duplicate
            if(temp!=NULL && temp->key == key){
                temp->val = val;
                delete newnode;
                return;
            }
            // Insert at beginning
            if(prev == NULL) {
                newnode->next = head;
                head = newnode;
            }
            else {
                newnode->next = temp;
                prev->next = newnode;
            }
        }
    }
    
    int get(int k) {
        MyHashMap* temp = head;
        while (temp != NULL) {
            if (temp->key == k)
                return temp->val;

            temp = temp->next;
        }
        return -1;
    }
    
    void remove(int key) {
        MyHashMap* temp = head;
        MyHashMap* prev = NULL;

    // Search for the key
    while(temp != NULL && temp->key != key) {
        prev = temp;
        temp = temp->next;
    }
    // Key not found
    if(temp == NULL) {
        return;
    }
    // Delete first node
    if(prev == NULL) {
        head = head->next;
    }
    else {
        prev->next = temp->next;
    }
    delete temp;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */