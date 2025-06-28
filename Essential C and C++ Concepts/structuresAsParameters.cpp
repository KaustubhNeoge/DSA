#include<iostream>
using namespace std;

struct Rectangle {
	int length;
	int breadth;
};
//call by value
int areaByValue(struct Rectangle r) {
	return r.length * r.breadth;
}

//call by reference
int areaByReference(struct Rectangle &r) {
	cout << "Current values of the rectangle are: " << endl;
	cout << "Length: " << r.length << endl;
	cout << "Breadth: " << r.breadth << endl;
	cout << "Enter new length: " << flush;
	cin >> r.length;
	cout << "Enter new breadth: " << flush;
	cin >> r.breadth;
	return r.length * r.breadth;
}

//call by address
int areaByAddress(struct Rectangle *r) {
	cout << "Current values of the rectangle are: " << endl;
	cout << "Length: " << r->length << endl;
	cout << "Breadth: " << r->breadth << endl;
	cout << "Enter new length: " << flush;
	cin >> r->length;
	cout << "Enter new breadth: " << flush;
	cin >> r->breadth;
	return r->length * r->breadth;
}

int main() {
	struct Rectangle r1;
	r1.length = 10;
	r1.breadth = 5;
	cout << "Length of the rectangle is: " << r1.length << endl;
	cout << "Breadth of the rectangle is: " << r1.breadth << endl;
	
	cout << "Call by value: " << endl;
	int AreaByValue = areaByValue(r1); //call by value
	cout << "Area of the rectangle is(using call by value): " << AreaByValue<< endl;
	
	cout << "Call by reference: " << endl;
	int areaByRef = areaByReference(r1); //call by reference
	cout << "Area of the rectangle is(using call by reference): " << areaByRef << endl;

	cout << "Call by address: " << endl;
	int areaByAddr = areaByAddress(&r1); //call by address
	cout << "Area of the rectangle is(using call by address): " << areaByAddr << endl;

	return 0;
}