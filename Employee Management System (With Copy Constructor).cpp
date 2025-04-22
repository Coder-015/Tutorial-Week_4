#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    float salary;
    string designation;

public:
    // Parameterized constructor
    Employee(int id, string n, float s, string d) {
        empID = id;
        name = n;
        salary = s;
        designation = d;
    }

    // Copy constructor
    Employee(const Employee &e) {
        empID = e.empID;
        name = e.name;
        salary = e.salary;
        designation = e.designation;
    }

    // Display function
    void displayDetails() {
        cout << "ID: " << empID << ", Name: " << name
             << ", Salary: Rs." << salary << ", Role: " << designation << endl;
    }
};

int main() {
    Employee E1(1001, "Ravi", 50000.0, "Manager");
    Employee E2 = E1; // copy constructor

    E1.displayDetails();
    E2.displayDetails();

    return 0;
}
