#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
int n;
void fun(int n ){
    // if (n==0) return;
    // while (n > 0){
    // cout<<n<<endl;
    // n--; }
    // fun(n);
    
    // n to 1;
    // cout<<n<<endl;
    // n--;
    // fun(n);
    // fun(n-1);

    // cout<<n<<endl;
    // n++;
    
    // fun(n);
    
    
    if (n==0) return;
    cout<<n<<endl;
    fun(n-1);
    
}
void lineton(int i,int n){
    // int i =0;
    if (i>n)return;
    cout<<i<<endl;
    i++;
    lineton(i,n);
}
int main() {
  cin>>n;
   fun(n);
lineton(1,n);

    return 0;
}