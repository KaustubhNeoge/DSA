  #include<iostream>
#include<stdio.h>
using namespace std;
struct Array{
    int *A;
    int length;
    int size;
};

void Display(struct Array arr){
	cout << "The elements are: " << endl;
	for (int i = 0; i < arr.length; i++) {
		cout << arr.A[i] << " ";
	}
	cout << endl;
}

int get(struct Array arr, int key){
    if(key >= 0 && key < arr.length){
        return arr.A[key];
    }
}

int main(){
    struct Array arr;
	int i, n, index;
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
	
	cout << "Enter an index to get the corresponding array element: " << flush;
	cin >> index;
	int ele = get(arr, index);
	cout << "The number present at index " << index << " is: " << ele << endl;
}
