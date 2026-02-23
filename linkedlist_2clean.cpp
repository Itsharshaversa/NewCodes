#include <bits/stdc++.h>
using namespace std;

// Node class: blueprint of each linked list element
class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = nullptr;
    }
};

// List class manages the linked list
class List {

private:
    Node* head;
    Node* tail;

public:

    // Constructor initializes empty list
    List() {
        head = tail = nullptr;
    }

    // Insert at front
    void push_front(int val) {

        Node* newnode = new Node(val);

        if(head == nullptr) {
            head = tail = newnode;
            return;
        }

        newnode->next = head;
        head = newnode;
    }

    // Insert at end
    void push_back(int val) {

        Node* newnode = new Node(val);

        if(head == nullptr) {
            head = tail = newnode;
            return;
        }

        tail->next = newnode;
        tail = newnode;
    }

    // Delete from front
    void pop_front() {

        if(head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if(head == nullptr) // list became empty
            tail = nullptr;

        delete temp;
    }

    // Delete from end
    void pop_back() {

        if(head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        // Only one node
        if(head == tail) {
            delete head;
            head = tail = nullptr;
            return;
        }

        Node* temp = head;

        while(temp->next != tail) {
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = nullptr;
    }

    // Insert at given position (0-based)
    void insert(int val, int pos) {

        if(pos < 0) {
            cout << "Invalid position\n";
            return;
        }

        if(pos == 0) {
            push_front(val);
            return;
        }

        Node* temp = head;
        int count = 0;

        while(temp != nullptr && count < pos-1) {
            temp = temp->next;
            count++;
        }

        if(temp == nullptr) {
            cout << "Position out of bounds\n";
            return;
        }

        Node* newnode = new Node(val);

        newnode->next = temp->next;
        temp->next = newnode;

        if(newnode->next == nullptr)
            tail = newnode;
    }

    // Search element and return position
    int searchinll(int key) {

        Node* temp = head;
        int pos = 0;

        while(temp != nullptr) {

            if(temp->val == key)
                return pos;

            temp = temp->next;
            pos++;
        }

        return -1;
    }

    // Print linked list
    void print() {

        Node* temp = head;

        while(temp != nullptr) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {

    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);
    ll.print();   // 1 -> 2 -> 3 -> 4 -> NULL

    ll.pop_front();
    ll.print();   // 2 -> 3 -> 4 -> NULL

    ll.pop_back();
    ll.print();   // 2 -> 3 -> NULL

    ll.insert(7, 2);
    ll.print();   // 2 -> 3 -> 7 -> NULL

    int pos = ll.searchinll(7);

    if(pos != -1)
        cout << "Found at position: " << pos << endl;
    else
        cout << "Not found\n";

    return 0;
}

// push_front() ✅

// push_back() ✅

// pop_front() ✅

// pop_back() ✅

// insert at position ✅

// search ✅

// print ✅
// 1 -> 2 -> 3 -> 4 -> NULL
// 2 -> 3 -> 4 -> NULL
// 2 -> 3 -> NULL
// 2 -> 3 -> 7 -> NULL
// Found at position: 2