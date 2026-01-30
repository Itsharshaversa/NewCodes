#include <bits/stdc++.h>
using namespace std;



// product of arr except itself 
int Prod_of_arr_except_self(int arr[],int n){
    int pro=1;
    int zerocount=0;
    for (int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount++;
        }
        else{
            pro=pro*arr[i];
        }
    }

    if(zerocount>1){
        return 0;
    }

    for (int i=0;i<n;i++){
        if(zerocount==1){
            if(arr[i]==0){
                arr[i]=pro;
            }
            else{
                arr[i]=0;
            }
        }
        else{
            arr[i]=pro/arr[i];
        }
    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
/ int main() {

    int product=1;
vector<int> vec={2,3,4,10};

for(int i=0;i<vec.size();i++){
    product=(product*vec[i]);
    
}
vector<int> ans=vec;

for(int i =0;i<ans.size();i++){
    ans[i] = product / vec[i];
    
}

for(int i:ans){
    
    cout<<i<<" " ;
}

    return 0;
}


// linear search in array
void ls(int arr[],int tar){
    bool ex=false;
    for(int i=0;i<7;i++){
        if (arr[i] == tar) {
            ex=true;
            break;
        }
       
        
    }
    if(ex) cout<<"FOUND AT ";
    else cout<< "not found";
    

    
}



int KDalgo(int arr[],int n ){
    int curSum=0;
    int ms=INT_MIN;
    
    for (int i=0;i<7;i++){
        curSum+=arr[i];
        ms=max(curSum,ms);
        
        // reset is done very lastly as it will affect the max sum calculation and we want to consider negative sums too;
        if(curSum<0){
            curSum=0;
        }
        
    
}
return ms;}



 int Binsearch(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1 ;
        while(st <= end){
            int mid = st + (end-st)/2 ;
            if(target>nums[mid]){
                st = mid+1;
            }
            else if(target<nums[mid]){
                end = mid-1;
            }
            else return mid;
            
        }
        return -1;
    }


int main() {

    
    int arr[]={3,-4,5,4,-1,7,-8};
    int n;

    cout<<KDalgo(arr,7);
    ls(arr,24);
    vector<int> vec={-1,0,3,5,9,12};

    Binsearch(vec,9);



    return 0;
}