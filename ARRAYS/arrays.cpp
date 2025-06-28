#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cout << "Enter the number of elements in the array: " << flush;
	cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cout << "Enter a number: " << flush;
		cin >> arr[i];
	}

	cout << "The elements in the array are: " << endl;
	for (int x: arr) {
		cout << x << " " << flush;
	}
	return 0;
}