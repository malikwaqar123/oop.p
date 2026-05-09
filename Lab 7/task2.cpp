#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    Vehicle(string b) : brand(b) {
    cout<<  "Vehicle Brand: " << brand << endl;
	}
};
class Car : public Vehicle {
protected:
    string model;
public:
    Car(string b, string m) : Vehicle(b), model(m) {
    cout << "Car Model: " << model << endl;
    }
};
class ElectricCar : public Car {
private:
    int batteryCapacity;
public:
    ElectricCar(string b, string m, int cap) : Car(b, m), batteryCapacity(cap) {
    cout << "ElectricCar Battery: " << batteryCapacity << " kWh" << endl;
    }
    void display() {
    cout << "\nCar Details:" << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};
int main() {
    cout << " Ride Booking System " << endl;
    ElectricCar tesla("Tesla", "Model 3", 75);
    tesla.display();
    cout << endl;
    
    return 0;
}
