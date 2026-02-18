#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    ios::sync_with_stdio(false);
     cin.tie(NULL);
     
     int T;
     cin>>T;
     
     
     while(T--){
         vector<int> vec(6);
        //  vector<int> alice(3);
        //  vector<int> bob(3);
        
        vector<int> alice;
        vector<int> bob;
         
         
         for(int i =0;i<6;i++){
             cin>>vec[i];
         }
         
         for(int i=0;i<3;i++){
            //  alice[i] = vec[i];
            alice.push_back(vec[i]);
             
         }
        sort(alice.begin(),alice.end());
        // int sum1 = alice[2];
        // alice.pop_back();
        // sum1 = sum1 + alice[1];
        int sum1= alice[2]+ alice[1];
       
         
         
        for(int i=3;i<6;i++){
            //  bob[i-3] = vec[i];
            
            bob.push_back(vec[i]);
         }
        sort(bob.begin(),bob.end());
        // int sum2 = bob[2];
        // bob.pop_back();
        // sum2 = sum2 + bob[1];\\
        
        int sum2 =bob[2]+ bob[1];
         
         
         
        if(sum1>sum2) cout<<"Alice"<<endl;
        else if(sum2>sum1) cout<<"Bob"<<endl;
        else cout<<"Tie"<<endl;
         
     }
     
     
     return 0;
}
