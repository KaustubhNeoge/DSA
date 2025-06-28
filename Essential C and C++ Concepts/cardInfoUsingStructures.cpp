#include<iostream>
#include<vector>
using namespace std;

struct Card {
	string suit;
	int value;
	string color;
};

int main() {
	int n;
	cout << "Enter the number of cards: " << flush;
	cin >> n;
	vector <Card> card(n);

	for (int i = 0; i < n; i++) {
		cout << "Enter card suit: " << flush;
		cin >> card[i].suit;
		cout << "Enter card value: " << flush;
		cin >> card[i].value;
		cout << "Enter color of the card: " << flush;
		cin >> card[i].color;
	}
	cout << "These are the cards that you have: " << endl;
	int cn = 1;
	for (Card c: card) {
		cout << "Card " << cn++ << endl;
		cout << "Card suit: " << c.suit << endl;
		cout << "Card value: " << c.value << endl;
		cout << "Card color: " << c.color << endl << endl;
	}
	return 0;
}