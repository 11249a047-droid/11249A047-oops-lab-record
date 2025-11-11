#include <iostream>
using namespace std;

class Employee {
public:
    int Empid;
    string name;
    float salary;

    void setEmployee(int id, string n, float sal) {
        Empid = id;
        name = n;
        salary = sal;
    }

    void displayEmployee();
};

void Employee::displayEmployee() {
    cout << "Employee ID: " << Empid
         << ", Name: " << name
         << ", Salary: Rs " << salary << endl;
}

int main() {
    Employee e1, e2;

    e1.setEmployee(101, "Ravi", 500000.75);
    e2.setEmployee(102, "Priya", 62000.50);

    e1.displayEmployee();
    e2.displayEmployee();

    return 0;
}
