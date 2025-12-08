#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

double divide(double dividend, double divisor) {

	if (divisor == 0) {
		throw string("Invalid divisor");
	}

	return dividend / divisor;
}

int main() {
	double a, divisor;

	cout << "Enter the dividend: ";
	cin >> a;

	cout << "Enter the divisor: ";
	cin >> divisor;

	try {
		double answer = divide(a, divisor);

		cout << "Answer : " << answer << endl;
	}
	catch (string& error) {
		cout << "Error: " << error << endl;
	}

	cout << "Some other stuffs" << endl;

	return 0;
}