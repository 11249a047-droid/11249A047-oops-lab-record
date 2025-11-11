#include<iostream>
using namespace std;
class car {
    public:
    string model;
    string company;
    float price;
    void display(){
        cout<<"company:"<<company
            <<"model:"<<model
            <<"price:Rs"<<price<<endl;
    }        
};
int main(){
    car c1,c2,c3;
    c1.company ="toyota";
    c1.model ="innova";
    c1.price =2000000;
    c2.company ="hyundai";
    c2.model ="i20";
    c2.price =800000;
    c3.company ="honda";
    c3.model ="city";
    c3.price =1200000;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
