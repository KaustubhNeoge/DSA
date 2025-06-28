#include<iostream>
#include<stdio.h>
using namespace std;

int fib(int n) {
	if (n <= 1) {
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {
	int n;
	printf("Enter the number of terms: ");
	cin >> n;
	int fibValue = fib(n);
	printf("%d", fibValue);
	return 0;
}