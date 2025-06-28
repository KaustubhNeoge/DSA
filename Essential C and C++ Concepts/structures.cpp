#include<iostream>
using namespace std;

struct Rectangle {
	int length;
	int breadth;
};

int main() {
	Rectangle r1 = { 10, 5 };
	cout << "Length: " << r1.length << endl;
	cout << "Breadth: " << r1.breadth << endl;
	cout << "Area: " << r1.length * r1.breadth << endl;
	//Reassigning values
	r1.length = 20;
	r1.breadth = 40;
	cout << "New Area: " << r1.length * r1.length << endl;
	return 0;
}