#include<iostream>
#include<stdio.h>
using namespace std;
struct Array {
    int* A;
    int size;
    int length;
};

void Display(struct Array arr) {
    cout << "The elements are: " << endl;
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int linearSearch(Array arr, int key) {
    for (int i = 0; i < arr.length; i++) {
        if(key == arr.A[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    struct Array arr;
    int i, n;
    printf("Enter the size of the array: ");
    cin >> arr.size;
    arr.A = new int[arr.size];
    cout << "Enter the nummber of elements: " << endl;
    cin >> n;
    if (n > arr.size) {
        cout << "Number of elements exceeds array size." << endl;
        delete[] arr.A;
        return 1;
    }
    arr.length = n;
    for (i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr.A[i];
    }
    //Display(arr);

    int key = 0;
    cout << "Enter the element to be searched: ";
    cin >> key;
    int index = linearSearch(arr, key);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }
    delete[] arr.A;
}

