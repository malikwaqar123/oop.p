#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle() {
    length = 1.0;
    width = 1.0;
    }
    Rectangle(float side) {
    length = side;
    width = side;
    }
    Rectangle(float l, float w) {
    length = l;
    width = w;
    }
    float area() {
    return length * width;
    }
void display() {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area() << endl;
    cout << "-------------------" << endl;
    }
};
int main() {
    Rectangle r1;         
    Rectangle r2(5);       
    Rectangle r3(4, 6);
    r1.display();
    r2.display();
    r3.display();

    return 0;
}
