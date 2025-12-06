#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int i;
	cout << "Enter a string: " << flush;
	getline(cin, str);
	
	for (i = 0; str[i] != '\0'; i++){}
	cout << "Length of the string is: " << i << endl;
	return 0;
}
