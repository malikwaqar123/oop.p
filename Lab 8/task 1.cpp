#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area()
    {
    return 0;
    }
};
class Rectangle : public Shape
{
private:
    double length, width;
public:
    Rectangle(double l, double w)
    {
    length = l;
    width = w;
    }
    double area()
    {
        return length * width;
    }
};
class Circle : public Shape
{
private:
    double radius;
public:
    Circle(double r)
    {
        radius = r;
    }
    double area()
    {
    return 3.1416 * radius * radius;
    }
};
int main()
{
    Shape *s;
    Rectangle rect(5, 4);
    Circle cir(3);
    s = &rect;
    cout << "Rectangle Area = " << s->area() << endl;
    s = &cir;
    cout << "Circle Area = " << s->area() << endl;

    return 0;
}
