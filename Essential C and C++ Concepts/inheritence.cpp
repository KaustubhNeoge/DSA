#include<iostream>
using namespace std;
class Animal {
public:
	void speak() {
		cout << "Animal speaks" << endl;
	}
};
class Cat : public Animal{
public:
	void jump() {
		cout << "Cat jumps" << endl;
	}
};

int main(){
	Animal a;
	Cat c;
	a.speak(); // Animal's method
	c.jump(); // Cat's own method
	c.speak(); // Cat can also use Animal's method due to inheritance
	return 0;
}