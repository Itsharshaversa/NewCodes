#include <bits/stdc++.h>
using namespace std;

int main(){

    // create linked list
    list<int> ll;

    // insert elements at back
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);

    // insert elements at front
    ll.push_front(5);
    ll.push_front(1);

    cout<<"Print using FOR LOOP (iterator):"<<endl;

    // using for loop with iterator
    for(auto it = ll.begin(); it != ll.end(); it++){
        cout<<*it<<" -> ";
    }
    cout<<"NULL"<<endl;


    cout<<"\nPrint using FOR EACH LOOP:"<<endl;

    // using for each loop
    for(int value : ll){
        cout<<value<<" -> ";
    }
    cout<<"NULL"<<endl;


    // size
    cout<<"\nSize of list: "<<ll.size()<<endl;

    // front element
    cout<<"Front element: "<<ll.front()<<endl;

    // back element
    cout<<"Back element: "<<ll.back()<<endl;


    // delete front element
    ll.pop_front();

    // delete back element
    ll.pop_back();

    cout<<"\nAfter deleting front and back:"<<endl;

    for(int value : ll){
        cout<<value<<" -> ";
    }
    cout<<"NULL"<<endl;


    // insert at specific position
    auto it = ll.begin();
    advance(it,1);   // move iterator to position 1

    ll.insert(it,100);

    cout<<"\nAfter inserting 100 at position 1:"<<endl;

    for(int value : ll){
        cout<<value<<" -> ";
    }
    cout<<"NULL"<<endl;


    // remove specific value
    ll.remove(20);

    cout<<"\nAfter removing value 20:"<<endl;

    for(int value : ll){
        cout<<value<<" -> ";
    }
    cout<<"NULL"<<endl;


    // clear list
    ll.clear();

    cout<<"\nAfter clearing list:"<<endl;

    if(ll.empty())
        cout<<"List is empty"<<endl;

}