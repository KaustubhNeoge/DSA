#include<iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int main() {
	int n1 = 10, n2 = 20, sum;
	sum = add(n1, n2);
	cout << "sum of " << n1 << " and " << n2 << " is: " << sum << endl;
	return 0;
}