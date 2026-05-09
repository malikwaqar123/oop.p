#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;
public:
    Employee() {
    id = 0;
    name = "Not Assigned";
    salary = 0.0;
	}
    void displayDetails() {
    cout << "Employee ID: " << id << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Employee Salary: " << salary << endl;
    }
};
int main() {
    Employee emp;
    emp.displayDetails();
    return 0;
}
