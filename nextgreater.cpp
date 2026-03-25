#include<bits/stdc++.h>
using namespace std;
// next greater element
int main(){
    vector<int> vec = { 2,3,4,56,7,8,9,5};
    stack<int> st;
    vector<int> ans(vec.size());
    
    for(int i = vec.size() -1; i >= 0; i--){
        while(!st.empty() && st.top() <= vec[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(vec[i]);
    }
    
    for(int a : ans){
        cout<<a<<" ";
    }
    



return 0;
}
    
