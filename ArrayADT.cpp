#include<iostream>
#include<stdio.h>
using namespace std;

struct Array {
	int *A;
	int size;
	int length;
};

void Display(struct Array arr){
	cout << "The elements are: " << endl;
	for (int i = 0; i < arr.length; i++) {
		cout << arr.A[i] << " ";
	}
	cout << endl;
}

int main() {
	struct Array arr;
	int i, n;
	cout << "Enter the size of the array: " << flush;
	cin >> arr.size;
	arr.A = new int[arr.size];

	cout << "Enter the number of elements: " << flush;
	cin >> n;
	if (n > arr.size) {
		cout << "Number of elements cannot exceed the size of the array." << endl;
		delete[] arr.A;
		return 1;
	}
	arr.length = n;

	for (i = 0; i < n; i++) {
		cout << "Enter a number: " << flush;
		cin >> arr.A[i];
	}
	Display(arr);

	delete[] arr.A; 
}