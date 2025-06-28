#include<iostream>
using namespace std;

void func(int n) {
	printf("%d", n);
	if (n > 0) {
		func(n-1);
		func(n-1);
	}
}

int main() {
	func(3);
	return 0;
}
