#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;
	cout << "Enter a string in uppercase: " << flush;
	getline(cin, str);

	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = str[i] + 32;
	}

	//ORRRRR

	//for (int i = 0; str[i] != '\0'; i++) {
		//str[i] = tolower(str[i]);
	//}

	cout << "The string in lowercase is: " << str << endl;
	return 0;
}
