// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;




int main() {
    // Write C++ code he
    vector<int>vec = {2,3,4,5,6,7,7,6,7};
    int hash[8]={0};
    
    
    
    // for(int x: vec){
    //     hash[x]+=1;
    // hash[x]++;
    // }
    
    for(int i =0;i<vec.size();i++){
        hash[vec[i]] = hash[vec[i]]+1;
    }
    
    
    // for(int b  :hash){
    //     cout<<b<<" ";
    // }
    
    
    
    // for(int i=0;i<8;i++){
    //     cout<<hash[i]<<" ";
    // }
    
    // char typecaasting
    int k='a';
    // cout<<k;
    

    
    
    // character type casting 
    string ame ="Harshit_Srivastava";
    // cout<<ame<<endl;
    int dash[256]={0};
    
    for(int i=0;i<ame.size();i++){
        dash[ame[i]]++;
    }
    
    
    // cout<<dash[ame]<<endl;
    int h=0+1;
    // cout<<h;





//  hash mapppppppp
 vector<int>vect = {2,3,4,5,6,7,7,6,7};
 map<int,int> mpp;
 
 //precomputation;
 for(int i:vect){
     mpp[i]++;
 }
//  fetching
 for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }
 



    
    return 0;
}


https://www.linkedin.com/posts/saidurgaprasadbattula_150-days-proven-roadmap-ugcPost-7442405015966687233-wDW7?utm_source=share&utm_medium=member_desktop&rcm=ACoAAEhSPzAB3bTjsTaHlZUOng2pOGO5jIw0xnc