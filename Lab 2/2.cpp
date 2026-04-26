#include <iostream>
using namespace std;

class rectangle{
	public: 
	int length;
	int width;
	
	void setdimension();
	int area();
	int perameter();
};
void rectangle::setdimension(){
    cout<<"Enter Length: ";
    cin>>length;
    cout<<"Entre width: ";
    cin>>width;
}
int rectangle::area(){
    return length * width;	
}
int rectangle::perameter(){
	return 2*length * width;
}
int main(){
	rectangle r1;
	
	r1.setdimension();
    cout<<"Area of rectangle: "<<r1.area() <<endl;
    cout<<"Perameter of rectangle: "<<r1.perameter() <<endl;
    
	return 0;
}
