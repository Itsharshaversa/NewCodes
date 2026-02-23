// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int val;
    Node* next;
    
    
    
    Node(int data){
        val=data;
        next=nullptr;
    }
    
};
// isse upar tak ek class bani jiska kaam h blueprint dena ki hamari strut ki jagah kse kaam kreg a and hamre struct me ek value hogi ek node *ptr jo ki next node ka address store krega fir hamne ek constructor bnaya jiska kaam h data lena user se aur hamre next ko null pr p[oint krdena 


class List{
  
    Node*head;
    Node*tail;
    public:
    List(){
        head=tail = nullptr;
    }
    // ab inse ye hua ki jo hamne individual nodes bnaye the ham unhe link kr denge . banega ek nullptr 
    void push_front(int val){
       Node*newnode = new Node(val); //line 1 
       if(head==NULL){
           head = tail=newnode;
           return;
           
       }
       else{
           newnode->next =head;
           head=newnode;
       }
    }
    
    //AB YE KYA KRTA ki hamra jo node bna h usme ham ek value ko aage lgaa de yaani phele ek new node create kro heap me jo hamne krdia line 1 se fir agar meri list null hui to yaani head kahi point nahi krra ussme head aur tail ko usii pr point kr do  else me ek bna do uske next ko heasd pr point kr do fir head ko newnode me daal do
    
    
    
    void push_back(int val){

    Node* newnode = new Node(val);

    // case 1: empty list
    if(head == NULL){
        head = tail = newnode;
        return;
    }

    // case 2: list not empty
    tail->next = newnode;
    tail = newnode;
}


    
    void pop_front(){
        if(head==NULL){
            cout<<"ll is empty ";
            return;
        }
        Node*temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    
    
    void pop_back(){
        if(head==NULL){
            cout<<"ll is empty";
            return;
            
        }
        Node* temp =head;
        //temp->next->next==NULL??
         while(temp->next !=tail){
             temp=temp->next;
             
         }
         temp->next= NULL;
         delete tail;
         tail=temp;
        
    }
    
    
void insert(int val, int pos){

    if(pos < 0){
        cout << "Invalid position\n";
        return;
    }

    // insert at front
    if(pos == 0){
        push_front(val);
        return;
    }

    Node* newnode = new Node(val);

    Node* temp = head;
    int count = 0;

    // move to (pos-1) node
    while(temp != nullptr && count < pos-1){
        temp = temp->next;
        count++;
    }

    // if position is greater than list size
    if(temp == nullptr){
        cout << "Position out of bounds\n";
        delete newnode;
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    // if inserted at last position, update tail
    if(newnode->next == nullptr){
        tail = newnode;
    }
}
    // void insert(int val,int pos){
    //     if (pos<0){
    //         cout<<"invalid";
    //         return;
    //     }
    //     if(pos==0){
    //         push_front(val);
    //         return;
    //     }
        
        
        
    //     Node* newnode = new Node(val);
    //     Node*temp = head;
    //     while(temp->next!= pos){
    //         temp =temp->next;
            
    //     }
        
    //     newnode->next = temp->next;
    //     temp->next = newnode;
    // }
    
    
    
    
    int searchinll(int key){
        Node*temp =head;
        int pos=0;
        
        
        
        
        while(temp!=NULL){
            if (temp->val==key){
            cout<<"found at ";
            return pos;
            }
            temp= temp->next;
            pos++;
    }
    return -1;
    }
    
    void print(){
        
        Node*temp =head;
        while(temp!=NULL){
            // cout<<(*temp).val<<"->";
            cout<<temp->val<<" -> ";
            temp =temp->next;
           
        }
        
        cout<<"NULL"<<endl;
        
    }
    
};

// Node class ek blueprint hai jo batata hai ki har node me
// ek integer value hogi aur ek pointer hoga jo next node ka address store karega.

// Constructor ka kaam hai node create karte time value assign karna
// aur next pointer ko NULL set karna.

// List class me head aur tail pointers hote hain jo first aur last node ko point karte hain.

// push_front function heap me new node create karta hai.

// Agar list empty hai to head aur tail dono new node ko point karte hain.

// Agar list empty nahi hai to new node ke next me current head ka address store hota hai
// aur phir head ko new node bana diya jata hai.


int main() {
  List ll;
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  
  
  ll.push_back(4);
  ll.print();//1 -> 2 -> 3 -> 4 -> NULL
  
  
  ll.pop_front();
  ll.print();//2 -> 3 -> 4 -> NULL
  
  
  ll.pop_back();
  ll.print();//2 -> 3 -> NULL
  
  ll.insert(7,2);
  ll.print();//2 -> 3 -> 7 -> NULL
  
  cout<<ll.searchinll(7);

    return 0;
}
// 1 -> 2 -> 3 -> 4 -> NULL
// 2 -> 3 -> 4 -> NULL
// 2 -> 3 -> NULL
// 2 -> 3 -> 7 -> NULL
// found at 2