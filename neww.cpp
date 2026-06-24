// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void oneton(int x,int n){
    
    if(x>n) return;
    cout<<x<<" ";
    // x++;
    
    return oneton(x+1,n);
    
}
void ntimesname(int x,int n){
    if(x>n) return;
    cout<<"Harshit"<<endl;
    return ntimesname(x+1,n);
}
void ntoone(int n){
    if(n<0) return;
    cout<<"hello";
    return;
}


int vowels(string s){
    int cnt=0;
    
    for(char ch :s){
         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
             cnt++;
         }
    }
    return cnt;

}

int main(){
    // ntimesname(1,5);
    // oneton(1,5);
    string s;
    // cin>>s;
    // cout<<s;
     getline(cin,s);
    cout<<vowels(s);
    
    return 0;
}