#include <iostream>
using namespace std;

class student{
	public: 
	
	string name;
	int rollnumber;
	float marks;
	
	void getdata(){
		cout<<"Enter student name: ";
		cin>>name;
		cout<<"Enter Roll Number: ";
		cin>>rollnumber;
		cout<<"Enter Marks: ";
		cin>>marks;
	}
	void displayData(){
		cout<<"Student Information"<<endl;
		
		cout<<"Name: "<<name<<endl;
		cout<<"Roll Number: "<<endl;
		cout<<"Marks: "<<endl;
	}
};
int main(){
	student s1;
	
	s1.getdata();
	s1.displayData();
	
	return 0;
}
