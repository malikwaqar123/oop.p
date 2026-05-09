#include <iostream>
using namespace std;
struct Student{
	string firstName;
	string lastName;
	int rollnumber;
	float marks;
	
	void displayStudentInfo() {
	cout<<"Full Name: "<<firstName <<" "<< lastName << endl;
	cout<<"Marks: "<< marks << endl;	
	}
};
int main(){
	Student s1;
	s1.firstName = "Waqar";
	s1.lastName = "Malik";
	s1.rollnumber = 108;
	s1.marks = 78.56;
	
	s1.displayStudentInfo();
	
	return 0;
}
