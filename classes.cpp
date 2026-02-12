// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


class Product{
    // properties 
    public:
    string name;
    float price;
    int weight;
    string best_before;
    
    //  methods
    
    void discount(){
        price = price - (0.1 * price);
        
    }
};


int main() {
    
    Product p1;
    p1.name ="CupCkaes";
    p1.price =109;
    p1.weight = 90;
    p1.best_before = "4 days";
    
    cout<<p1.name<<endl;
    cout<<p1.weight<<" g"<<endl;
    p1.discount();
    cout<<p1.price<<"/-"<<endl;
    cout<<p1.best_before<<endl;

    return 0;
}