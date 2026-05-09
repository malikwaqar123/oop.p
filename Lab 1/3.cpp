#include <iostream>
using namespace std;
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student s1;
    Student *studentPtr = &s1;
     studentPtr->firstName = "malik";
    studentPtr->lastName = "Waqar";
    studentPtr->rollNumber = 30;
    studentPtr->marks = 92.0;
    studentPtr->displayStudentInfo();
    return 0;
}














