#include<iostream>
using namespace std;

int main(){
	int *ptr = new int; // dynamically allocate memory for an integer
	*ptr = 42; // assign a value to the allocated memory
	cout << "Value: " << *ptr << endl; // output the value
	delete ptr; // free the allocated memory
	return 0;
}