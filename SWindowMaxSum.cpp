#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {39,4,5,6,7,8,9,-1,12,34};

    cout << "My original array: ";
    for(int ch : vec){
        cout << ch << " ";
    }

    int window = 3;
    int n = vec.size();

    vector<int> ans;
    int sum = 0;

    // first window
    for(int i = 0; i < window; i++){
        sum += vec[i];
    }
    int maxsum = sum;

    ans.push_back(sum);

    int l = 0;
    int r = window - 1;

    // sliding window
    while(r < n - 1){
        sum -= vec[l];
        l++;
        r++;
        sum += vec[r];
        
        ans.push_back(sum);
        maxsum = max(maxsum,sum);
    }

    cout << "\nSum of sliding window is: ";
    for(int h : ans)
        cout << h << " ";
        
        
        
    cout<<endl<<"max sum = "<<maxsum;


    return 0;
}