#include<iostream>
#include<stdio.h>
using namespace std;

class Array {
public:
	int* A;
	int size;
	int length;
};

void Display(Array arr) {
	cout << "Elements of the array are: " << endl;
	for (int i = 0; i < arr.length; i++) {
		cout << "Element " << i << ": " << arr.A[i] << endl;
	}
}

void Append(Array* arr, int x) {
	if (arr->length < arr->size) {
		arr->A[arr->length++] = x;
	}
}

void Insert(Array *arr, int index, int x) {
	if (index >= 0 && index <= arr->length) {
		for (int i = arr->length; i > index; i--) {
			arr->A[i] = arr->A[i - 1];
		}
		arr -> A[index] = x;
		arr -> length++;
	}
}

int main() {
	Array arr;
	int i = 0, n = 0, x1 = 0, x2 = 0, index = 0;
	cout << "Enter size of the array: " << flush;
	cin >> arr.size;
	arr.A = new int[arr.size];

	cout << "Enter the number of elements: " << flush;
	cin >> n;
	//Checking the size limit
	if (n > arr.size) {
		cout << "The number of elements exceeds the array size." << endl;
		delete[] arr.A;
		return 1;
	}
	arr.length = n;

	for (i = 0; i < n; i++) {
		cout << "Enter a number: " << flush;
		cin >> arr.A[i];
	}
	Display(arr);

	cout << "Enter a number to be appended: " << flush;
	cin >> x1;
	Append(&arr, x1);

	cout << "After appending, the array is: " << endl;
	Display(arr);

	cout << "Enter the element to be inserted: " << flush;
	cin >> x2;
	cout << "Enter the index at which you want to insert: " << flush;
	cin >> index;

	Insert(&arr, index, x2);
	cout << "Array after appending: " << endl;
	Display(arr);

}