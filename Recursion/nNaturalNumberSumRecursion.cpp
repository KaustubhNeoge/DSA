#include<iostream>
#include<stdio.h>
using namespace std;
int RecSum(int n) {
	if (n == 0) return 0;
	return RecSum(n-1) + n;
}

int LoopSum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

void FormulaSum(int n) {
	int sum = n * (n + 1) / 2;
	printf("%d", sum);
}

int main() {
	int r;
	cout << "Sum using recursion: " << endl;
	r = RecSum(5);
	printf("%d\n\n", r);

	cout << "Sum using for loop: " << endl;
	int loopSum = LoopSum(5);
	printf("%d\n\n", loopSum);

	cout << "Sum using the formula n(n+1)/2: " << endl;
	FormulaSum(5);

	return 0;
}
