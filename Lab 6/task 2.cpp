#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
    return a + b;
    }
    int multiply(int a, int b) {
    return a * b;
    }
};
class Student {
    Calculator* calc; // Aggregation (reference/pointer)
public:
    Student(Calculator* c) {
    calc = c;
    }
    void performAddition(int a, int b) {
    cout << "Addition Result: " << calc->add(a, b) << endl;
    }
    void performMultiplication(int a, int b) {
    cout << "Multiplication Result: " << calc->multiply(a, b) << endl;
    }
};
int main() {
    Calculator sharedCalc; // Created externally
    Student s1(&sharedCalc);
    Student s2(&sharedCalc);
    s1.performAddition(5, 2);
    s2.performMultiplication(3, 4);

    return 0;
}
