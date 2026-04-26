#include <iostream>
using namespace std;

class temperature{
	public:
		float celsius;
		
		float convert(){
		float fahrenheit = (celsius * 9/5) + 32;
        return fahrenheit;
}
	void display()
    {
        cout << "Temperature in Celsius: " << celsius << endl;
		cout << "Temperature in Fahrenheit: " << convert() << endl;
    }	
};
int main()
{
temperature t1;
    cout << "Enter Temperature in Celsius: ";
    cin >> t1.celsius;
    t1.display();
    return 0;
}
