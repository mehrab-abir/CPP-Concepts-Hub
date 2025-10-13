#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<functional>

using namespace std;

int main() {
	plus<int>add;

	cout << add(10, 6) << endl;

	minus<int>substract;
	cout << substract(10, 3) << endl;

	greater<int>isGreater;

	if (isGreater(5, 13)) {
		cout << "First argument is greater than the second argument" << endl;
	}
	else {
		cout << "First argument is not greater than the second argument" << endl;
	}

	return 0;
}