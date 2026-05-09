#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;
public:
    // Parameterized Constructor
    BankAccount(string accNo, string holder, double bal) {
    accountNumber = accNo;
    accountHolder = holder;
    balance = bal;
    }
    void showAccountDetails() {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder: " << accountHolder << endl;
    cout << "Balance: " << balance << endl;
    }
};
int main() {
    BankAccount acc("PK5687927900", "Malik Waqar", 10000);
    acc.showAccountDetails();
    
    return 0;
}
