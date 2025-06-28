#include<iostream>
using namespace std;

//Function using call by value
int addByValue(int a, int b) {
	return a + b;
}

void addByAddress(int *a, int *b, int *sumByAdd) {
	*sumByAdd = *a + *b;
}

int addByReference(int &a, int &b) {
	return a + b;
}

int main() {
	int n1 = 10, n2 = 20;
	int sumByValue = addByValue(n1, n2);
	cout << "Sum using call by value: " << sumByValue << endl;

	int sumByAdd;
	addByAddress(&n1, &n2, &sumByAdd);
	cout << "Sum using call by address: " << sumByAdd << endl;

	int sumByRef;
	sumByRef = addByReference(n1, n2);
	cout << "Sum using call by address: " << sumByRef << endl;


	return 0;
}