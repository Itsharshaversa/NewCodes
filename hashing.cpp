// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;




int main() {
    // Write C++ code he
    vector<int>vec = {2,3,4,5,6,7,7,6,7};
    int hash[8]={0};
    
    // internal hashing works out when we create a hash array where every elment whose frequency is to be found i ss intitalized as zero;
    
    // for(int x: vec){
    //     hash[x]+=1;
    // }
    
    for(int i =0;i<vec.size();i++){
        hash[vec[i]] = hash[vec[i]]+1;
    }
    
    
    // for(int b  :hash){
    //     cout<<b<<" ";
    // }
    
    
    
    for(int i=0;i<8;i++){
        cout<<hash[i]<<" ";
    }
    return 0;
}