#include<iostream>
using namespace std;

void change(int &value){
	value = 20; // This will change the original value in main
}

int main() {
	int value = 10;
	cout << "Before change: " << value << endl;
	change(value);
	cout << "After change: " << value << endl;
	return 0;
}