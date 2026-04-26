#include <iostream>
using namespace std;

class voter{
	public:
	string name;
	int age;
	
	bool iseligible();
};
    bool voter::iseligible(){
    	if (age >= 18) {
    		return true;
		}
		else{
			return false;
		}
	}
int main(){
	voter v1;
	cout<<"Enter Name: ";
	cin>>v1.name;
	cout<<"Enter Age: ";
	cin>>v1.age;
	if (v1.iseligible()){
		cout<<"you are eligible to vote: "<<endl;
	}
	else{
	    cout<<"you are not eligible: "<<endl;
	}
	return 0;
	}
