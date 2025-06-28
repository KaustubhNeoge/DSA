#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle {
	int length;
	int breadth;
};

void initialize(Rectangle *r, int l, int b) {
	r -> length = l;
	r->breadth = b;
}

int area(struct Rectangle r) {
	return r.length * r.breadth;
}

int perimeter(struct Rectangle r) {
	return 2*(r.length + r.breadth);
}

int main() {
	Rectangle r = { 0, 0 };
	int l, b;

	cout << "Enter length: " << flush;
	cin >> l;
	cout <<"Enter breadth: " << flush;
	cin >> b;
	initialize(&r, l, b);
	int Area = area(r);
	int peri = perimeter(r);
	cout << "Area of the rectangle: " << Area << endl;
	cout << "Perimeter of the rectangle: " << peri << endl;	

}