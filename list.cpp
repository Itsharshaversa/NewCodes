//25 march 2026
#include <bits/stdc++.h>
using namespace std;


int main() {
    list<int> ll;



// bhar se kse krte declare dkhlo 

    list<int> list = {10, 20, 30};

    auto head = list.begin();

    cout << *head;   // 10

    
    // push krdo us ll me elemesnts
    
    ll.push_back(23);
    ll.push_back(3);
    ll.push_back(2);// piche se 
    ll.push_front(34);// age se 
    
    cout << ll.size()<<endl;
    // bta ta h kitne nodes h 
    ll.remove(10);   // removes all occurrences of 10
    
    
    // ab pop kse krna h aage piche se 
    ll.pop_back();    // remove last
    ll.pop_front();   // remove first
    
    
    
    
    
    
    // how iterator are differnt from pointers 
    
    int a = 10;
    // int *ptr= &a;
    // cout<<ptr<<endl<<*ptr;
    
    // iteratot ko rkh a h hamne us memory address pr
    
    
    // auto *tty = ll.begin();
    // cout<<tty;
    // error qki ye ek iterator h pointe nai 
    
    
    
    
    auto it = ll.begin();
    advance(it, 1);   // move iterator to index 1
    ll.insert(it, 100);   // insert before that position
    
    ll.reverse();
    // so as to reverse the list 
    
    
    ll.sort();
    // so as to sort the lsit 
    
    
    
    it++;
    
    cout<<*(it)<<endl;
    
    
    
    // ab baari aati h traveresal ki 
    for(int k : ll){
        cout<<k<<" -> ";
        
    }
    cout<<"Null"<<endl;
    
    
    // dusroi trh ka traversal;
    
    
    for(auto it = ll.begin();it!=ll.end() ;it++){
        cout<<*it<<" -> ";
    }
    cout<<"NULL"<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    // Now when we have reach further theres
    
  

    return 0;
}