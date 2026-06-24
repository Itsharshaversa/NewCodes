// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int ntoone(int n){
    if(n<1){
        return 1;
    }
    cout<<n<<" ";
    return ntoone(n-1);
}
int factorial(int n){
    if(n<1){
        return 1;
    }
    return n* factorial(n-1);
}
string tost(int n){
       string s = to_string(ans);

    // Right se 3 digits ke baad comma lagao
    int pos = s.length() - 3;
    if(pos > 0)
        s.insert(pos, ",");

    cout << s << endl;
}
int main() {
    int n =8;
    // cin>>n;
    // ntoone(n);
    // fiboonaci(n);
    cout<<factorial(n)<<endl;
    int ans =factorial(n);
    // oneton(n);
    vector<int> vec;
    for(int i =0;i<5;i++){
        int k=ans%10;
        ans/=10;
        
        vec.push_back(k);
    }
    vec.insert(vec.begin()+2,','');
    for(int k:vec){
        cout<<k;
    }

    return 0;
}


    string s = to_string(ans);

    // Right se 3 digits ke baad comma lagao
    int pos = s.length() - 3;
    if(pos > 0)
        s.insert(pos, ",");

    cout << s << endl;
