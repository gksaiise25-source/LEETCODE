//doubly ll
#include<iostream>
using namespace std;

class Node {
    public :
        int data;
        Node* next;
        Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
    Node* head;
    Node* tail;

public :
    DoublyList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newnode = new Node(val);
        if(head == NULL) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void print() {
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data <<" <=> ";
            temp = temp->next;
        }
        cout<< "NULL\n";
    }

    void push_back(int val) {
        Node* newnode = new Node(val);

        if(head == NULL) {
            head = tail = newnode;
        } else {
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front() {
        Node* temp = head;
        head = head->next;
        if(head != NULL) {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
        if(head == NULL) {
            cout<<"DLL is empty\n";
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail!=NULL) {
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
    }

};

int main() {
    DoublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);

    dll.print();
    return 0;
}
