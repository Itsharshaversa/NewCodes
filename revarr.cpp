// e C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec ={ 4,5,7,8,9,4,5,63,14};
    // int n =vec.size();
    int i =0;
    int j=vec.size()-1;
    
    // while(i<j){
    //     swap(vec[i],vec[j]);
    //     i++;
    //     j--;
        
        
        
    // }
    
    
    
    reverse(vec.begin(),vec.end());
    
    for( int k:vec){
        cout<<k<<" ";
    }
 

    return 0;
}