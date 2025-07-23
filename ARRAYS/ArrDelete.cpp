#include<iostream>
using namespace std;

struct Arr {
    int* arr;
    int size;
    int length;
};

void Display(struct Arr arr) {
    cout << "The elements are: " << endl;
    for (int i = 0; i < arr.length; i++) {
        cout << arr.arr[i] << " ";
    }
    cout << endl;
}

int delElement(struct Arr* arr, int index) {
    if (index < 0 || index >= arr->length) {
        cout << "Invalid index." << endl;
        return -1;
    }
    int x = arr->arr[index];
    for (int i = index; i < arr->length - 1; i++) {
        arr->arr[i] = arr->arr[i + 1];
    }
    arr->length--;
    cout << "Element deleted successfully." << endl;
    Display(*arr);
    return x;
}

int main() {
    struct Arr arr;
    int i, n;
    cout << "Enter the size of the array: " << flush;
    cin >> arr.size;
    arr.arr = new int[arr.size];

    cout << "Enter the number of elements: " << flush;
    cin >> n;
    if (n > arr.size) {
        cout << "Number of elements cannot exceed the size of the array." << endl;
        delete[] arr.arr;
        return 1;
    }
    arr.length = n;

    for (i = 0; i < n; i++) {
        cout << "Enter a number: " << flush;
        cin >> arr.arr[i];
    }
    Display(arr);

    int delIndex;
    cout << "Enter the index of the element to be deleted: " << flush;
    cin >> delIndex;
    int deleted = delElement(&arr, delIndex);
    if (deleted != -1)
        cout << "Deleted element: " << deleted << endl;

    delete[] arr.arr;
    return 0;
}
