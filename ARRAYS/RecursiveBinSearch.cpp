#include<iostream>
#include<stdio.h>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

int RecBinarySearch(int a[], int l, int r, int key){
    int mid;
    if(l <= r){
        mid = (l + r)/2;
        if(key == a[mid]){
            return mid;
        }
        else if(key < a[mid]){
            r = mid - 1;
            return RecBinarySearch(a, l, r, key);
        }
        else{ 
            l = mid + 1;
            return RecBinarySearch(a, l, r, key);
        }   
    }
    
    return -1;
}

int main(){
    struct Array arr;
    int i, n, key;
    cout << "Enter size of the array: " << flush;
    cin >> arr.size;    
    arr.A = new int[arr.size];
    cout << "Enter the number of elements: " << flush;
    cin >> n;
    if(n > arr.size){
        cout << "Number of elements exceed the size of the array.";
        delete[] arr.A;
        return 1;
    }
    arr.length = n;
    
    for(int i = 0; i < n; i++){
        cout << "Enter a number: " << flush;
        cin >> arr.A[i];
    }
    
    cout << "Enter a number to be searched: " << flush;
    cin >> key;
    int index = RecBinarySearch(arr.A, 0, arr.length, key);
    
    cout << "The index of the searched number is: " << index << endl;
    return 0;
}
