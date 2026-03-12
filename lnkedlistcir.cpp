#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class List{
public:
    Node* head;
    Node* tail;

    List(){
        head = tail = nullptr;
    }

    void push_back(int val){
        Node* newnode = new Node(val);

        // first node
        if(head == nullptr){
            head = tail = newnode;
            tail->next = head;
        }
        else{
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }
void display(){
    if(head == nullptr) return;

    Node* temp = head;

    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    }while(temp != head);

    cout << "HEAD\n";
}
};

int main() {

    List l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    l.display();

    return 0;
}