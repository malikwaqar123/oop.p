#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void input_person_info() {
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    }
    void display_person_info() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};
class Student : public Person {
private:
    int student_id;
public:
    void input_student_info() {
    input_person_info();
    cout << "Enter Student ID: ";
    cin >> student_id;
    }
    void display_student_info() {
    display_person_info();
    cout << "Student ID: " << student_id << endl;
    }
};
int main() {
    Student s1;
    s1.input_student_info();
    cout << "\nStudent Information:\n";
    s1.display_student_info();

    return 0;
}
