// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool Twosum(vector<int> &vec,int target){
    sort(vec.begin(),vec.end());
   
    
    int st= 0;
    int end=vec.size()-1;
   
    
    while(st<end){
         int sum= vec[st]+vec[end];
        if(sum == target) return true;
        
        else if(sum>target) end--;
        else st++;
    }
    return false;
}

// for pointers to get return either we have to u se brute force in whcih tc will on2 or using hashing we can done it as sorting destroyes pointers and in this code we are using sort nlogn + traversal which takes oN; 

void prefix(vector<int> &nums){
    vector<int> ans(nums.size());
    ans[0]= nums[0];
    
    
    for(int i=1;i<nums.size();i++){
        ans[i]= ans[i-1]+nums[i];
        
    }
    
    
    for(int x: ans){
        cout<<x<<" ";
    }
    
    
    
}



int main() {
    vector<int> vec={2,3,4,5,99,6,78,7,65};
    // int target =67;
    // cout<<Twosum(vec,66);
    prefix(vec);
    
  auto it = vec.begin();
//   cout << *it;
  
    
    

    return 0;
}