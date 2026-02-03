// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec={2,3,4,5,7,8,9,8,7,3,4,4,4};
    int n =vec.size();
    
    // map<int,int> mpp;
    
    // orderd map is sorted and takes logn complexity like fetching and storing rather we use unordedrd mao which takse scomplexity of O(1);
//     2 -> 1
// 3 -> 2
// 4 -> 4
// 5 -> 1
// 7 -> 2
// 8 -> 2
// 9 -> 1
    unordered_map<int,int> mpp;
//   ans when we use unorderd map for storing bvales just ans is samse but the keys are not sotred in sorted array and if un orderd map we can only use individual data types such as int float char not like pair<int,int>;;;;
  //     9 -> 1
// 8 -> 2
// 7 -> 2 
// 5 -> 1
// 4 -> 4
// 3 -> 2
// 2 -> 1
    
    // for(int i =0;i<n;i++){
    //     // mpp[vec[i]] =  mpp[vec[i]] +1;
    //      mpp[vec[i]]++;
    // }
    for (int x : vec) {
            mpp[x]++;
        }
    
    for(auto k : mpp) cout<<k.first << " -> "<<k.second<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // // spiral matrix 
    // vector<vector<int>> vec = {{1,2,3},{4,6,5},{5,9,5}};
    
    
    // vector<int> arr = {2,3,4,5,67,8,9,87};
    
    // arr[3]++;
    
    
    // for (auto k : arr)cout<< k<<" ";
    
    
    
    // int n=vec.size();
    // cout<<n;
    // for (int i =0 ;i<n;i++){
    //     for(int j =0;j<n;j++){
    //         cout<<vec[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
        



    

    return 0;
}