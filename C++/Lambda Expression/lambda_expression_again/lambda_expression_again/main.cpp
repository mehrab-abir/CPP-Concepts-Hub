#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

void runLambda() {
	int x = 5, y = 3;
	
	auto useVar = [=](int a) {
		cout << "Inside useVar():\n";
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		cout << "a = " << a << endl;
	};

	auto updateVar = [&](int a) {
		cout << "Inside updateVar():\n";
		x = x + a; //updation possible as captured by reference
		y = y + a;

		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		cout << "a = " << a << endl;
	};

	useVar(10);
	cout << "Before the updateVar():\n";
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;


	updateVar(20);
	cout << "After the updateVar():\n"; //x and y changed
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

}

int main() {

	/*auto greet = [](string name) {
		cout << "hello from lambda, " <<name<< endl;
	};
	greet("Jon");

	cout << "Hello outside" << endl;

	greet("Matt");*/

	int a = 10;

	auto getSquare = [&a]() {
		int square = a * a;
		//a = a + 5; //this will change the value of a as captured by reference
		return square;
	};

	cout <<"Square = "<< getSquare() << endl;

	cout << "a = " << a << endl;

	runLambda();

	return 0;
}