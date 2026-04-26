#include <iostream>
using namespace std;

class Display {
    int lastResult;
public:
    Display() {
    lastResult = 0;
    }
    void showResult(int result) {
    lastResult = result;
    cout << "Result: " << result << endl;
    }
    int getLastResult() {
    return lastResult;
    }
};
class Calculator {
    Display display; // Composition (owned object)
public:
    void add(int a, int b) {
    int result = a + b;
    display.showResult(result);
    }
    void multiply(int a, int b) {
    int result = a * b;
    display.showResult(result);
    }
    void showLastResult() {
    cout << "Last Result: " << display.getLastResult() << endl;
    }
};
int main() {
    Calculator calc;
    calc.add(5, 3);
    calc.multiply(4, 2);
    calc.showLastResult();

    return 0;
}
