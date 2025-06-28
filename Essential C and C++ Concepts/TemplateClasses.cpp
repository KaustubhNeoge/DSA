#include<iostream>
using namespace std;

template<class T>
class Arithmetic {
private:
	T a, b;
public:
	Arithmetic(T a, T b);
	T add();
	T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b) {
	this->a = a;
	this->b = b;
}

template<class T>
T Arithmetic<T>::add() {
	T sum = a + b;
	return sum;
}

template<class T>
T Arithmetic<T>::sub() {
	return a - b;
}

int main() {
	Arithmetic<int> in(10, 5);
	cout << in.add() << endl;

	Arithmetic<float> fl(20, 10);
	cout << fl.sub() << endl;
}