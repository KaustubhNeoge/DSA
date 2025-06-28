#include<iostream>
using namespace std;

class Rectangle {
private:
	int length;
	int breadth;
public:
	Rectangle() { length = breadth = 1; }
	Rectangle(int l, int b);
	int area();
	int perimeter();
	int getLength();
	void setLength(int l);
};

Rectangle::Rectangle(int l, int b) {
	length = l;
	breadth = b;
}

int Rectangle::area(){
	return length * breadth;
}
int Rectangle::perimeter() {
	return 2 * (length + breadth);
}
int Rectangle::getLength() {
	return length;
}

void Rectangle::setLength(int l) {
	length = l;
}

int main() {
	Rectangle r(10, 5);
	cout << "Area of the rectangle: " << r.area() << endl;
	cout << "Perimeter of the rectangle: " << r.perimeter() << endl;
	cout << "Length of the rectangle: " << r.getLength() << endl;
	int newLength = 0;
	cout << "Enter new length: " << flush;
	cin >> newLength;
	r.setLength(newLength);
	cout << "Updated length of the rectangle: " << r.getLength() << endl;
	return 0;

}