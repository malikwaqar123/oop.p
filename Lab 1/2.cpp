#include <iostream>
using namespace std;
struct student {
	
	string firstname;
	string lastname;
	int rollNo;
	float marks;
	
	void displayStudentInfo (){
		cout<<"Full Name: "<< firstname << " " << lastname <<endl;
		cout<<"marks: "<< marks <<endl;
		cout<<"---------"<<endl;
	}
};
int main(){
	int num;
	cout<<"Enter the number of students: ";
	cin>>num;
	student students[num];
	for (int i = 0; i < num; i++){
		cout<<"Enter details for student: "<< i+1 <<endl;
		cout<<"First Name: ";
		cin>>students[i].firstname;
		cout<<"Last Name: ";
		cin>>students[i].lastname;
		cout<<"Roll No: ";
		cin>>students[i].rollNo;
		cout<<"Marks: ";
		cin>>students[i].marks;
	}
cout<<"-------Student Information---------"<<endl;

for (int i = 0; i < num ; i++){
	students[i].displayStudentInfo();
}
return 0;	
}
