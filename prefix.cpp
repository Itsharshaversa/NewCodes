// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 

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