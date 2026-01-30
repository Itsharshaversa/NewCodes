#include <bits/stdc++.h>
using namespace std;

void Bs(vector<int>&arr,int n ){
    
    
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped=true;}
        }
        if(!swapped) break;

    }
    for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";

}
}


int main() {
    vector<int> arr={23,4,7,34,5,6,78,45};
    int n =arr.size();
    
    Bs(arr,n);
   

    return 0;
}