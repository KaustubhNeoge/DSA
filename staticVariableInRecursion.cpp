#include<iostream>
#include<stdio.h>
using namespace std;

int fun(int n) {
	static int x = 0;
	if (n > 0) {
		x++;
		return fun(n - 1) + x;
	}
	return 0;
}

int main() {
	int r = fun(5);
	cout << "The value of r is: " << r << endl;
}