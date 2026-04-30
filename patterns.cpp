#include <bits/stdc++.h>
using namespace std;

void square(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
            
        }
        cout<<endl;
    }
}

void pyramid1(int n ){ 
    for(int i=0;i<n;i++){
        
        for(int j =0;j<=i;j++){
            // cout<<"* ";
            // cout<<j<<" ";
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pyramid2(int n){
    for(int i=0;i<n;i++){
        
        for(int j =n-1;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main() {

    int n =5;
    square(n);
    cout<<endl;
    pyramid1(n);
    pyramid2(n);

    return 0;
}