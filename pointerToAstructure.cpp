#include<iostream>
using namespace std;

	struct Rectangle {
		int length;
		int breadth;
	} r1;
	
	
int  main() {
	//assigning length and breadth to the rectangle using variable
	r1.length = 20;
	r1.breadth = 10;
	cout << "Length: " << r1.length << endl;
	cout << "Breadth: " << r1.breadth << endl;

	//assigning length and breadth to the rectangle using pointer to structure
	struct Rectangle* ptr = &r1;
	ptr->length = 40;
	ptr->breadth = 20;
	cout << "Length: " << ptr->length << endl;
	cout << "Breadth: " << ptr->breadth << endl;

	struct Rectangle* p; // Pointer to a structure
	p = new Rectangle; // Dynamically allocating memory for a new Rectangle structure
	p->length = 30; // Assigning values using pointer to the dynamically allocated structure
	p->breadth = 15;
	cout << "Length: " << p->length << endl;
	cout << "Breadth: " << p->breadth << endl;

	return 0;
}