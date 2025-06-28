#include<iostream>
using namespace std;

void printMenu() {
	cout << "1> Start" << endl;
	cout << "2> Accelerate" << endl;
	cout << "3> Decelerate" << endl;
	cout << "4> Stop" << endl;
	cout << "5> Exit" << endl;
}

int getInput() {
	cout << "Enter your choice: " << flush;
	int choice;
	cin >> choice;
	return choice;
}

void processSelection(int choice) {
	switch (choice) {
	case 1:
		cout << "Starting the engine..." << endl;
		cout << "Engine started" << endl;
		break;
	case 2:
		cout << "Accelerating..." << endl;
		cout << "Speed increased" << endl;
		break;
	case 3:
		cout << "Decelerating..." << endl;
		cout << "Speed decreased" << endl;
		break;
	case 4:
		cout << "Engine stopped" << endl;
		break;
	case 5:
		cout << "Exiting..." << endl;
		break;
	default:
		cout << "Please enter a valid choice." << endl;
		break;
	}

}


int main() {
	printMenu();
	int choice = getInput();
	processSelection(choice);
	return 0;
}