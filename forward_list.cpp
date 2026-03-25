
// 25th march 26 
#include <bits/stdc++.h>
using namespace std;

int main() {
    forward_list<int> fl;
    forward_list<int> f2;


    fl.push_front(10);
    fl.push_front(20);
    fl.push_front(30);

    auto it = fl.begin();
    fl.insert_after(it, 25);

    cout << "List: ";
    for(int x : fl) cout << x << " ";

    fl.remove(20);
    
    
    
    fl.remove(10);        // remove value
    fl.sort();            // sort list
    fl.reverse();         // reverse
    fl.unique();          // remove consecutive duplicates
    fl.merge(f2);  // merge sorted lists

    cout << "\nAfter remove: ";
    for(int x : fl) cout << x << " ";

    return 0;
}