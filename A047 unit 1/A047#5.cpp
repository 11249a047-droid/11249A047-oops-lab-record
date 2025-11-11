#include<iostream>
using namespace std;
class book {
    public:
    string tittle;
    string author;
    float price;
    void display(){
        cout<<"tittle:"<<tittle
            <<"author:"<<author
            <<"price:Rs"<<price<<endl;
    }
};        
int main(){
    book b1,b2;
    b1.tittle = "c++ programming";
    b1.author = "Bjaven stroustrup";
    b1.price = 750.50;
    b2.tittle ="data structures";
    b2.author ="Mark Allen Weiss";
    b2.price = 600.75;
    b1.display();
    b2.display();
    return 0;
}
    



