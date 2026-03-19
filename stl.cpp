// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void number(int a ){
   

    if(a==23){
        cout<<a<<endl;
        // return;
    }
    cout<<2345;
   
}

int main() {
    // number(23);
    vector<int> vec={2,3,45,6,66,7};
    // int n  =;
    //  vec.erase(vec.begin()+4); 
    //  erases value at that memory addresss;
    
    for(int i =0;i < vec.size();i++){
        if (vec[i] % 2 == 0){
            vec.erase(vec.begin()+i);
            i--;
        }
}
    
    // 10 10 10 10 10 
    // // 5 baar vo vslue jo ki h 10;
    // for(int x:vec){
    // cout<<x << " ";}
    
    
    
    
    deque<int> dq;
    
    
    
    
    dq.push_back(34);
    dq.push_back(34);
    dq.push_back(34);
    dq.push_back(34);
    
    
    // for(int x:dq){
    //     cout<<x << "  ";
    // }



// time for stack


stack<int> st;


// cout<<st.top();
st.push(3);
st.push(4);
st.push(5);
st.push(34);

// while(!st.empty()){
//     cout<<st.top()<< " "<<endl;
//     st.pop();
  
// }



queue<int> que;


que.push(90);
que.push(0);
que.push(9);
que.push(903);

// while(!que.empty()){
//     cout<<que.front()<<" ";
//     que.pop();
    
    
    
// }



 vector<int> vect = {5, 1, 9, 3};
    priority_queue<int> pq;
    
    
    priority_queue<int> pques(vec.begin(), vec.end());

    for(int x : vect){
        pq.push(x);
    }

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }





    return 0;
}

