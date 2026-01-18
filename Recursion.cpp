// Online C++ compiler to run C++ program online
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

int main() {
  cin>>n;
   fun(n);

    return 0;
}