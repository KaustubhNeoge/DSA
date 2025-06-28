#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle {
public:
	int length;
	int breadth;

	void initialize(int l, int b) {
		length = l;
		breadth = b;
	}

	int area() {
		return length * breadth;
	}

	int perimeter() {
		return 2 * (length + breadth);
	}
};

int main() {
	Rectangle r;
	int l, b;

	cout << "Enter length: " << flush;
	cin >> l;
	cout << "Enter breadth: " << flush;
	cin >> b;
	r.initialize(l, b);
	int Area = r.area();
	int peri = r.perimeter();
	cout << "Area of the rectangle: " << Area << endl;
	cout << "Perimeter of the rectangle: " << peri << endl;

}