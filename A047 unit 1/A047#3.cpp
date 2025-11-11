#include<iostream>
using namespace std;
class account {
    public:
    int account ;
    string name;
    float balance;
    void display() {
        cout<<"account no:"<<account 
            <<"name:"<<name
            << "balance:"<<balance<<endl;
    }
};
int main() {
    account a1,a2;
    a1.account = 1001;
    a1.name = "ramesh";
    a1.balance = 25,000.50;
    a2.account =1002;
    a2.name = "sita";
    a2.balance = 40,000.75;
    a1.display();
    a2.display();
    return 0;
}    