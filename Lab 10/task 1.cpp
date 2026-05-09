#include <iostream>
using namespace std;

class Employee
{
public:
    virtual double calculateSalary()
    {
    return 0;
    }
};
class FullTime : public Employee
{
private:
    double basicPay;
    double allowancePercent;
    double taxPercent;
public:
    FullTime(double bp, double ap, double tp)
    {
    basicPay = bp;
    allowancePercent = ap;
    taxPercent = tp;
    }
    double calculateSalary()
    {
    return basicPay + (basicPay * allowancePercent / 100)- (basicPay * taxPercent / 100);
    }
};

class PartTime : public Employee
{
private:
    int hoursWorked;
    double ratePerHour;
public:
    PartTime(int h, double r)
    {
    hoursWorked = h;
    ratePerHour = r;
    }
    double calculateSalary()
    {
    return hoursWorked * ratePerHour;
    }
};

int main()
{
    Employee *emp;
    FullTime ft(50000, 20, 10);
    PartTime pt(40, 500);

    emp = &ft;
    cout << "Full Time Employee Salary = "<< emp->calculateSalary() << endl;

    emp = &pt;
    cout << "Part Time Employee Salary = "<< emp->calculateSalary() << endl;

    return 0;
}
