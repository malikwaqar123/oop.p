#include <iostream>
using namespace std;

class Product
{
private:
    string name;
    double price;
    int quantity;
public:
    void setName(string n)
    {
        if(n != "") 
        {
            name = n;
        }
    }
    void setPrice(double p)
    {
        if(p > 0)   // price must be positive
        {
            price = p;
        }
    }
    void setQuantity(int q)
    {
        if(q >= 0) 
        {
            quantity = q;
        }
    }
    
    string getName()
    {
        return name;
    }
    double getPrice()
    {
        return price;
    }
    int getQuantity()
    {
        return quantity;
    }
};

int main()
{
    Product p;

    p.setName("Laptop");
    p.setPrice(85000);
    p.setQuantity(5);

    cout << "Product Name: " << p.getName() << endl;
    cout << "Price: " << p.getPrice() << endl;
    cout << "Quantity: " << p.getQuantity() << endl;

    return 0;
}
