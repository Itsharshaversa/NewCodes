// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;




int main() {
    int a=3;
    int*ptr=&a;
    
    int* *ptr2 = &ptr;
    
    cout<<ptr2<<endl;
    cout<<&a<<endl;
    cout<<*ptr2<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    
    
    cout<<**ptr2<<endl;
    

    //0x7fff6039f198
    // 0x7fff6039f1a4
    // 0x7fff6039f1a4
    // 0x7fff6039f1a4
    // 3
    // 3

    return 0;
}