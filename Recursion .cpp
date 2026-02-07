#include <bits/stdc++.h>
using namespace std;

int ntoone(int n){
    if(n<=1) return 1;
    cout<<n<<" ";
     return ntoone(n-1); 
}


int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int sumofn(int n){
    if (n==0 || n==1) return n;
    
    
    return n + sumofn(n-1);
}

int Fiboo(int n ){
    
    if(n==0 || n==1) return n;
    return Fiboo(n-1) + Fiboo(n-2);
}


bool issorted(vector<int> &vec){
   
    vector<int> ans(vec.size());
    for(int i=0;i<vec.size();i++){
        ans[i] = vec[i];
    }
    
    sort(ans.begin(),ans.end());
    
    for(int i=0;i<vec.size();i++){
        if(vec[i] != ans[i]) return  false;
    }
    
    return true;
    
    
    
    
    
}

bool issort(vector<int> &vec){
    for(int i = 0 ;i <vec.size()-1;i++){
        if(vec[i] >= vec[i+1]){
            return false;
        }
    }
    return true;
}

bool issort_Rec(vector<int> &vec,int n){
    
     
    if(n==0 || n==1) return true;
    
    
   return vec[n-1]>=vec[n-2] && issort_Rec(vec,n-1);
    
}





int main() {
    // int n ;
    // cin >>n;
    int fact =factorial(3);
    // cout<<fact;
    // cout<<sumofn(4);'
    
    
    vector<int> vec = {2,3,4,5,6,7,89,96,968};
    cout<<issort(vec);
    
    

// cout<<Fiboo(7);

    return 0;
}