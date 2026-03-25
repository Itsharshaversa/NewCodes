// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class stack{
    vector<int> vec;
    public:
     
     void push(int val){
         vec.push_back(val);
     }
     
     int top(){
         return vec[vec.size() -1];
         
     }
     void pop(){
         vec.pop_back();
     }
    
};
int main() {
    vector<int> vec =  { 2,3,4,56,7,8,9,5};
    // int n= vec.size()-1;
    // int top = vec[n];
    // vec.pop_back();
    // int top = vec[n];
    cout<<vec.back();
vec.pop_back();
cout<<vec.back();
    return 0;
}