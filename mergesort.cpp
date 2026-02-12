// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int st,int mid,int end){
    vector<int> temp;
    int i= st;
    int j = mid+1;
    
    while(i <= mid && j <= end) {
        // compare krke chota element temp me daal do
        if (arr[i]<=arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }

        else 
        // arr[j] is smaller than arr[i]
        {
            temp.push_back(arr[j]);
            j++;
        }

    }

// agar left half me kuch element bache hai to unko temp me daal do
    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
// agar right half me kuch element bache hai to unko temp me daal do
    
    while(j <= end) {
         temp.push_back(arr[j]);
            j++;
        
    
    }
    // ab temp me dono half ke sorted element hai to unko arr me daal do jo main array h 
    // 

    for(int idx =0;idx<temp.size();idx++){
        arr[idx+st] = temp[idx];
    }
}


void MS(vector<int> &vec,int st,int end){
    
    if(st < end){
        int mid = st + (end - st) / 2;
        
        MS(vec,st,mid);
        // left half sorted

        MS(vec,mid+1,end);
        // right half sorted
        merge(vec,st,mid,end); 

        // merge krke dono half ko sort krdia
    }
}


int partition(vector<int> &vec,int st,int end){
    int pivot = vec[end];
    int i = st-1;
    
    for(int j=st;j<end;j++){
        if(vec[j] < pivot){
            i++;
            swap(vec[i],vec[j]);
        }
    }
    swap(vec[i+1],vec[end]);
    return i+1;
}



void QS(vector<int> &vec,int st,int end){
    if(st < end){
        int pivot = partition(vec,st,end);
        QS(vec,st,pivot-1);
        QS(vec,pivot+1,end);
    }
}   

int main() {
    
    vector<int> vec={2,3,4,9,5,6};
    
    MS(vec,0,vec.size()-1);
    
    // printing the sorted array
    for(int val:vec){
        cout<<val<< " ";
    }
    cout<<endl;
    

    QS(vec,0,vec.size()-1);
    // printing the sorted array
    for(int val:vec){
        cout<<val<< " ";
    }
    
    

    return 0;
}