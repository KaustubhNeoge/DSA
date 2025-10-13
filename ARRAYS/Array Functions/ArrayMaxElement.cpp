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

int Max(struct Array arr){
    int max = arr.A[0];
    for(int i = 0; i < arr.length; i++){
        if(arr.A[i] > max){
            max = arr.A[i];
        }
    }
    return max;
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
    
    int max = Max(arr);
    cout << "The largest number in the array is: " << max;
    delete[] arr.A;
    
    return 0;
}