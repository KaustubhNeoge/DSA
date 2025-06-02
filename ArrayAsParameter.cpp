#include<iostream>
using namespace std;

void fun(int A[], int n) {
	for (int i = 0; i < 5; i++)
		cout << A[i] << " ";
}

int main() {
	int A[] = { 10, 20, 30, 40, 50 };
	int n = sizeof(A)/sizeof(int);
	fun(A, n);
	return 0;
}