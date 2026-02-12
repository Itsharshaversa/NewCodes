#include <bits/stdc++.h>
using namespace std;

void ps(vector<int> &vec,vector<int> &ans,int i ){
     if(i==vec.size()){
         cout<<"{ ";
    
        // print krdia 
         for(int val : ans){
        
             cout<<val<< " ";
         }
         
         cout<<"}"<<endl;
         return;
     }
     
     
    //   include
    ans.push_back(vec[i]);
    ps(vec,ans,i+1);
    
    
    // backtrack
    ans.pop_back();
    
    
    // exclude
    ps(vec,ans,i+1);
    
    
    
}


int main() {
    vector <int> vec={1,2,3};
    
    vector<int> ans;
    
    
    ps(vec,ans,0);

    return 0;
}