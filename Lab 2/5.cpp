#include <iostream>
using namespace std;

class calculator{
	public:
		float num1;
		float num2;
		
		float add(){
			return num1 + num2;	
		}
		float subtract(){
			return num1 - num2;
		}
		float multiply(){
			return num1 * num2;
		}
		float divide(){
			return num1 / num2;
		}
};
int main(){
	calculator c1;
	
	int choice;
	cout<<"Enter First Number: ";
	cin>>c1.num1;
	cout<<"Enter second Number: ";
	cin>>c1.num2;
	
	cout << "\nChoose Operation\n";
	cout << "1. Addition"<<endl;
    cout << "2. Subtraction"<<endl;
    cout << "3. Multiplication"<<endl;
    cout << "4. Division"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;
	switch(choice)
    {
        case 1:
            cout << "Result = " << c1.add();
            break;
        case 2:
            cout << "Result = " << c1.subtract();
            break;
        case 3:
            cout << "Result = " << c1.multiply();
            break;
        case 4:
            cout << "Result = " << c1.divide();
            break;
        default:
            cout << "Invalid choice";
    }
    return 0;	
}
