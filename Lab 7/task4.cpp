#include <iostream>
#include <cstring>
using namespace std;
class Device {
protected:
char* deviceName;
int deviceID;
double* data;

public:
    Device(const char* name, int id, double d) {
    deviceName = new char[strlen(name) + 1];
    strcpy(deviceName, name);
    deviceID = id;
    data = new double;
    *data = d;
    cout << "Device Constructor Called\n";
    }
    void displayDevice() {
    cout << "Device Name: " << deviceName << endl;
    cout << "Device ID: " << deviceID << endl;
    cout << "Data: " << *data << endl;
    }

    Device() {
    delete[] deviceName;
    delete data;
    cout << "Device Destructor Called\n";
   }
};
class Sensor : public Device {
private:
char* sensorType;
float* sensorValue;

public:
    Sensor(const char* name, int id, double d,
    const char* type, float value)
    : Device(name, id, d) {
    sensorType = new char[strlen(type) + 1];
    strcpy(sensorType, type);
    sensorValue = new float;
    *sensorValue = value;
    cout << "Sensor Constructor Called\n";
    }
void displaySensor() {
    displayDevice();
    cout << "Sensor Type: " << sensorType << endl;
    cout << "Sensor Value: " << *sensorValue << endl;
    }
    ~Sensor() {
    delete[] sensorType;
    delete sensorValue;
    cout << "Sensor Destructor Called\n";
    }
};
int main() {
    Sensor* s1 = new Sensor("TempDevice", 101, 25.5, "Temperature", 36.7);
    cout << "\n--- Sensor Details ---\n";
    s1->displaySensor();
    delete s1;

    return 0;
}
