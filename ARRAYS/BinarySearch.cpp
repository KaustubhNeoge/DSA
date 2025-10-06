#include<iostream>
#include<stdio.h>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

int BinarySearch(struct Array arr, int key){
    int l, mid, h;
    l = 0;
    h = arr.length-1;
    
    while(l <= h){
        mid = (l + h)/2;
        if(key == arr.A[mid]){
            return mid;
        }
        else if(key < arr.A[mid]){

        }
    }
    return 0;
}

int main(){
    struct Array arr;
    int i, n;
    cout << "Enter size of the array: " << flush;
    cin >> arr.size;
    arr.A = new int[arr.size];
    cout << "Enter the number of elements: " << flush;
    cin >> n;
    if(n > arr.size){
        cout << "Number of elements exceed the size of the array."
        delete[] arr.A;
        return 1;
    }
    arr.length = n;
    
    for(int i = 0; i < n; i++){
        cout << "Enter a number: " << flush;
        cin >> arr.A[i];
    }
    
    
    
}