#include <bits/stdc++.h>
using namespace std;

int ntoone(int n){
    if(n<=1) return 1;
    cout<<n<<" ";
     return ntoone(n-1); 
}


int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int sumofn(int n){
    if (n==0 || n==1) return n;
    
    
    return n + sumofn(n-1);
}

int Fiboo(int n ){
    
    if(n==0 || n==1) return n;
    return Fiboo(n-1) + Fiboo(n-2);
}

int main() {
    // int n ;
    // cin >>n;
    int fact =factorial(3);
    // cout<<fact;
    // cout<<sumofn(4);'

cout<<Fiboo(7);

    return 0;
}