// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sum(int n ){
    int sums =0;
    if(n>0){
    
    sums = n + sum(n-1);
    }
    return sums;
   
}
 






int main() {
    int n ;
    cin >>n;
    // numbers(n);
    cout<<sum(n)<<endl;
    int ans;
    ans = (n*(n+1))/2;
    cout<<ans<<endl;


    return 0;
}

 