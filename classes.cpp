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
    
    // un parametrised contructor type one 
     Product(){
        cout<<"hello sathio "<<endl;
        
        name="chips";
        price =10;
    }
    
    // parameterised constructor for taking object values as input 
    // and declaring values direct 
    Product(string name  , float price , int wt, string bbf){
        // name =n;
        // price=p;
        // weight =wt;
        // best_before = bbf; 
        this -> name = name;
        this -> price = price;  
        this -> weight = wt;
        this -> best_before = bbf;

    }
};


class Student{
    public:
    string name;
    int age;
    int year;
    
    
    Student(string name, int age, int year){
        this->name=name;
        this->age=age;
        this->year=year;
        
    }
    
    Student(){
        cout<<"hello sathio "<<endl;
        name = "ram";
        age=12;
        year=7;
    //   cout<<name;
    }
    
    
    
    void display(){
        cout<<name<<endl;
         cout<<age<<endl;
          cout<<year<<endl;
        
    }
};

int main() {
    // object creation

    Product p1;
    // Product p2;
    // Product p3;
    // jitti baar object banega utti baar constructor pr call  lagegi
    

    // accessing properties and methods of the class using the object and assigning values to the properties
    // p1.name ="CupCkaes";
    // // p1.price =109;
    p1.weight = 90;
    p1.best_before = "4 days";
    
    
    
    
    
    
    // jab vo constructor banya ho jo parmeter leta to obejct aise banta h l.
    Product p5("Harshit",45,40,"5 days");
    
    
    
    
    cout<<p5.name<<endl;
    cout<<p5.price<<"/-"<<endl;
    cout<<p5.weight<<" g"<<endl;
    p1.discount();
    cout<<p5.price<<"/-"<<endl;
    cout<<p5.best_before<<endl;
    
    cout<<endl<<endl;
    
    // sabse phele bna p1 to constructor pr call gai uske usne values assign krdi baaki hamne khud assigh krdi fir ek fuction chlaa dia jo ki price me discount daal deta h fir bas priint krraa dia auto call lgti h uske costrcutor ke type ke hsaab se 
    
    cout<<p1.name<<endl;
    cout<<p1.price<<"/-"<<endl;
    cout<<p1.weight<<" g"<<endl;
    p1.discount();
    cout<<p1.price<<"/-"<<endl;
    cout<<p1.best_before<<endl;
    
       




    // student




    Student S1("Harshit", 21,3);
   
   S1.display();
   Student S2;



      Student S2(S1);



    //   cpy constructor
    
   S2.display();
    
    

    return 0;
}



// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int age;
//     int year;
    
    
//     Student(string name, int age, int year){
//         this->name=name;
//         this->age=age;
//         this->year=year;
        
//     }
    
//     // Student(){
//     //     cout<<"hello sathio "<<endl;
//     //     name = "ram";
//     //     age=12;
//     //     year=7;
//     //   cout<<name;
//     // }
    
    
    
//     void display(){
//         cout<<name<<endl;
//          cout<<age<<endl;
//           cout<<year<<endl;
        
//     }
// };


// int main() {
//    Student S1("Harshit", 21,3);
   
//    S1.display();
//    Student S2(S1);
//    S2.display();
   

//     return 0;
// }