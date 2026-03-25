#include <bits/stdc++.h>
using namespace std;




class MinStack {
public:
    stack<pair<int,int>> st;// pair leleo 2 value store kraa do ek to value hogai ek hogya min value 
    MinStack() {
        
    }
    
    void push(int val) {
        //push me kuch ni krna jo agar khailii hu ato push krdo both th values tahat occur jo dalegi voi khaali h 
        // ni to mini cal krke daal do 
        

        if(st.empty()){
            st.push({val,val});

        }
        else {
            int mini = min(val,st.top().second);
            st.push({val,mini});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
        
    }
    
    int getMin() {
        return st.top().second;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */