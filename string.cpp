// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());

    return str == rev;
}





int main() {
    // char str[10];
    // // cin >> str;
    // cin.getline(str,5,'.');
    // cout<<str<<endl;
    // cout<<strlen(str);
// char str[]="Harshit.";
// str="Baby";
// yei hota char array me which is static in nature;;;
// we use strings// cout<<strlen(str)<<endl;
// int cnt=0;
// for(int i=0 ; i < str[i] != '\0' ; i++){
//     cnt++;
// }
// cout<<cnt;



// string str="Harshit Srivastava is a good man who likes to code.";
// cout<<str.length()<<endl;
// str="AGe 19 munde di;;;";

// cout<<str[5]<<endl;

// cout<<str;





// // REVERSE A STRING


// string str= "Harshit";

// int st =0;
// int end=str.length()-1;

// while(st<end){
//     swap(str[st],str[end]);
//     st++;
//     end--;
// }
// cout<<str<<endl;
// cout<<*str.begin()<<endl;
// cout<<*(str.end()-1)<<endl;



// // REVERSE USING STLL
// reverse(str.begin(),str.end());
// cout<<str<<endl;
// cout<<*str.begin()<<endl;
// cout<<*(str.end()-1)<<endl;


// is pallindrome ormnot 


// string str= "madam";
// string str= "racecar";
string str= "Fuck5&%&5kcuf";

// string str2=str;
// reverse(str2.begin(),str2.end());


// if(str == str2 )
// cout<<str2;
bool ans =isPalindrome(str);

if(ans) cout<<"YEs it is pallindrome:";
else cout<<"not a pallindrome:";

    return 0;
}// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());

    return str == rev;
}





int main() {
    // char str[10];
    // // cin >> str;
    // cin.getline(str,5,'.');
    // cout<<str<<endl;
    // cout<<strlen(str);
// char str[]="Harshit.";
// str="Baby";
// yei hota char array me which is static in nature;;;
// we use strings// cout<<strlen(str)<<endl;
// int cnt=0;
// for(int i=0 ; i < str[i] != '\0' ; i++){
//     cnt++;
// }
// cout<<cnt;



// string str="Harshit Srivastava is a good man who likes to code.";
// cout<<str.length()<<endl;
// str="AGe 19 munde di;;;";

// cout<<str[5]<<endl;

// cout<<str;





// // REVERSE A STRING


// string str= "Harshit";

// int st =0;
// int end=str.length()-1;

// while(st<end){
//     swap(str[st],str[end]);
//     st++;
//     end--;
// }
// cout<<str<<endl;
// cout<<*str.begin()<<endl;
// cout<<*(str.end()-1)<<endl;



// // REVERSE USING STLL
// reverse(str.begin(),str.end());
// cout<<str<<endl;
// cout<<*str.begin()<<endl;
// cout<<*(str.end()-1)<<endl;


// is pallindrome ormnot 


// string str= "madam";
// string str= "racecar";
string str= "Fuck5&%&5kcuf";

// string str2=str;
// reverse(str2.begin(),str2.end());


// if(str == str2 )
// cout<<str2;
bool ans =isPalindrome(str);

if(ans) cout<<"YEs it is pallindrome:";
else cout<<"not a pallindrome:";

    return 0;
}