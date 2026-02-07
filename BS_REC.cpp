// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int BS(vector<int> &vec,int target,int st,int end){
    if (st > end) return -1;
    
    int mid =st + (end-st)/2;
    if(vec[mid] ==target ) return mid;
    
    else if(vec[mid]<target ) return BS(vec, target,mid+1,end );
    else  return BS(vec, target,st,mid-1 );
    
    
}

int main() {
    vector<int> vec={2,3,4,4,5,6,7,8,9,876};
    int target =2;
    
    
    int n = vec.size();
    
    cout<<BS(vec,target,0,n-1);

    return 0;
}


// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int BS(vector<int> &vec,int target,int st,int end){
    if (st > end) return -1;
    
    int mid =st + (end-st)/2;
    if(vec[mid] ==target ) return mid;
    
    else if(vec[mid]<target ) return BS(vec, target,mid+1,end );
    else  return BS(vec, target,st,mid-1 );
    
    
}

int main() {
    vector<int> vec={2,3,4,4,5,6,7,8,9,876};
    int target =2;
    
    
    int n = vec.size();
    
    cout<<BS(vec,target,0,n-1);

    return 0;
}