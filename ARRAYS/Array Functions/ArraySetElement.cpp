#include<iostream>
using namespace std;

struct Array{
    int *A;
    int length;
    int size;
};

void Display(struct Array arr){
    cout << "\nThe elements are: " << endl;
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void Set(struct Array *arr, int index, int value ){
    if(index >= 0 && index < arr->length){
        arr->A[index] = value;
    }
}

int main(){
    struct Array arr;
    int i, n, index, value;
    cout << "Enter the size of the array: " << flush;
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

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
    
    cout << "\nEnter the index of the element to change the value: " << flush;
    cin >> index;
    cout << "Enter new value of the element at index " << index << ": " << flush;
    cin >> value;

    Set(&arr, index, value);
    
    Display(arr);

    delete[] arr.A;
    
    return 0;
}