#include <iostream>
#include <string>
using namespace std;
class Product {
protected:
    string name;
    double price;
public:
    Product(string n, double p) : name(n), price(p) {
    cout << "Product" << endl;
    }
    void display() {
    cout << "Product Name: " << name << endl;
    cout << "Price: $" << price << endl;
    }
};
class Electronics:public Product {
private:
    int warrantyYears;
public:
    Electronics(string n, double p, int w) : Product(n, p), warrantyYears(w) {
    cout << "Electronics" << endl;
    }
    void display() {
    Product::display();
    cout << "Warranty Years: " << warrantyYears << " years" << endl;
    }
};
int main() {
    cout << "Task 1: Online Shopping System" << endl;
    Electronics laptop("hp", 2000.00, 2);
    cout << "\nProduct Details:" << endl;
    laptop.display();
    cout << endl;
    return 0;
}
