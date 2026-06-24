// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void onetonbt(int x,int n){
    if(x<1) return;
     onetonbt(x-1,n);
    cout<<x<<" ";
}
void ntoone(int n){
    if(n<1) return ;
    cout<<n;
    return ntoone(n-1);
}
void ntoonebt(int x,int n){
    if(x>n) return;
    ntoonebt(x+1,n);
    cout<<x;
}

 void sumofn(int sum,int n){
     if(n<1) {
         cout<<sum;
         return;
     }
    //  sum+=n;
     sumofn(sum+n,n-1);
     
    
}


// functional recursion
int sumof(int n){
    if(n<1) return 0;
    return n+sumof(n-1);
}
int fact(int  n){
    if(n<1) return 1;
    return n*fact(n-1);
}

bool palin(string str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    if(str==rev) return true;
    return false;
}
int fibo(int n ){
    if(n==1 || n==0) return n;
    return fibo(n-1) + fibo(n-2); 
}

int main() {
//   onetonbt(5,5);
// ntoonebt(1,5);
// ntoone(5);
// cout<<sumof(5);
// sumofn(0,5);
// cout<<fact(5);
// cout<<palin("Harshit");'
cout<<fibo(12);
    return 0;
}