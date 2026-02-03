// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int key=10;
    
    int arr[3][3] ;
    // ;= {{3,7,4},{2,1,9},{1,3,4}};
    int rows =3;
    int cols =3;
    bool flag = false;
    // int ms=INT_MIN;
    // int cur=0;
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
            // cout<<arr[j][i]<<" "; printing
        }
    }
    
    int cur=0;
    int secD=0;
     for(int i=0;i<rows;i++){ 
        //  int cur = 0; 
        for(int j=0;j<cols;j++){
            // cin>>arr[i][j];
            // cout<<arr[i][j]<<" "; 
            
            
            // if(arr[i][j]==key) {cout<<"found at :"<<i<<" "<<j;
            //     return 0;
            // }
            
            //     flag = true;
            //     break;
            
            
            // }
            
            
            if(i==j){ cur+=arr[i][j];}
            
            
            
            
        }
        // cout<<endl;
        
        
        // ms=max(ms,cur);
        
     }
        // if(flag) cout<<"found at :"<<i<<" "<<j;
         cout <<cur;
    

    return 0;
}
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // spiral matrix 
    vector<vector<int>> vec = {{1,2,3},{4,6,5},{5,9,5}};
    
    
    vector<int> arr = {2,3,4,5,67,8,9,87};
    
    arr[3]++;
    
    
    for (auto k : arr)cout<< k<<" ";
    
    
    
    int n=vec.size();
    // cout<<n;
    // for (int i =0 ;i<n;i++){
    //     for(int j =0;j<n;j++){
    //         cout<<vec[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
        



    

    return 0;
}