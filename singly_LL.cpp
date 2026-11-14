
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

class list {
    node* head;
    node* tail;

public:
    list() {
        head = tail = NULL;
    }

    // Insert at beginning
    void push_front(int val) {
        node* newnode = new node(val);

        if(head == NULL) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    // Print linked list
    void printll() {
        node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Insert at end
    void push_back(int val) {
        node* newnode = new node(val);

        if(head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // Delete from beginning
    void pop_front() {
        if(head == NULL) {
            cout << "LL is empty";
            return;
        }

        node* temp = head;
        head = head->next;

        if(head == NULL) {
            tail = NULL;
        }

        temp->next = NULL;
        delete temp;
    }

    // Delete from end
    void pop_back() {
        if(head == NULL) {
            cout << "LL is empty";
            return;
        }

        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        node* temp = head;

        while(temp->next != tail) {
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    // Insert at a particular position (0-based)
    void insert_middle(int value, int pos) {
        if(pos < 0) {
            cout << "Invalid position";
            return;
        }

        if(pos == 0) {
            push_front(value);
            return;
        }

        node* temp = head;

        for(int i = 0; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if(temp == NULL) {
            cout << "Invalid position";
            return;
        }

        node* newnode = new node(value);

        newnode->next = temp->next;
        temp->next = newnode;

        if(newnode->next == NULL) {
            tail = newnode;
        }
    }

    // Search an element
    int search(int key) {
        node* temp = head;
        int idx = 0;

        while(temp != NULL) {
            if(temp->data == key) {
                return idx;
            }

            temp = temp->next;
            idx++;
        }

        return -1;
    }
};

int main() {
    list ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.insert_middle(4, 1);

    ll.printll();

    cout << ll.search(5) << endl;

    return 0;
}
