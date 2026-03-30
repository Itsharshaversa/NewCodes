#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(7);
    q.push(9);

    // Print original queue (without destroying it)
    cout << "Before reversing:\n";
    queue<int> temp = q; // copy
    while(!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }

    // Reverse using stack
    stack<int> st;

    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    // Print reversed queue
    cout << "\nAfter reversing:\n";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}





