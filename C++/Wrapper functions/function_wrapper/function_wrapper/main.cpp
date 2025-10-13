#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<functional> //must include to use wrapper

#include "practice.h"

using namespace std;

/*
This is great when:
	- You want to store different kinds of callables (function, lambda, functor).
	- You want to pass a generic callable to another function.
*/

//regular function
int multiply(int a, int b) {
	return a * b;
}

//functor
class Add {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

//calculate
void calculate(int a, int b, function<int(int, int)> op) {
	cout << "Result: " << op(a, b) << endl;
}


int main() {

	//regular funtion wrapper
	function<int(int, int)> f = multiply;
	cout << "From regular funtion wrapper: "<< f(5, 4) << endl;

	//lambda function wrapper__wrapping a lambda 
	function<int(int, int)> lambda = [](int x, int y) {
		return x + y;
	};

	cout << "From lambda wrapper: " << lambda(3, 4) << endl;

	//functor wrapper
	function<int(int, int)>functor = Add();

	cout << "From 'functor' wrapper: " << functor(10, 6) << endl;

	cout << endl;

	//perform any operation--add, multiply, divide etc.

	calculate(10, 3, [](int x, int y) {return x * y; });
	calculate(10, 3, [](int x, int y) {return x + y; });

	cout << endl;

	//more lambda function wrapper
	function<void()> greet = []() {
		cout << "Hello world" << endl;
	};
	function<void()>sayBye = []() {
		cout << "Good Bye" << endl;
	};

	//storing the callables (lambda wrapper) into a vector
	vector < function<void()>>actions = { greet,sayBye };

	//loop through the vector
	for (auto& action : actions) {
		action();
	}
	cout << endl;

	practice();

	return 0;
}