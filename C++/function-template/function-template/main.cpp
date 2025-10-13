#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<functional>

using namespace std;

int multiply(int a, int b) {
	return a * b;
}

void increment(int& x, int& y) {
	x++;
	y++;
}

int main() {
	//bind
	auto getProduct = bind(multiply, 10, 3);
	cout << "Product = " << getProduct() << endl;

	//ref
	int a = 10, b = 20;

	auto inc = bind(increment, ref(a), b); //a will be updated, b won't.

	inc();

	cout << "a = " << a << endl << "b = " << b << endl;


	return 0;
}