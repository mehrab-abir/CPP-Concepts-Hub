#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int getSquareSum(int *numbers, int n) {

	cout << "Inside function: " << numbers << endl<<endl;

	//accessing array element using pointer dereferencing
	cout <<" -> value of 1st index : " << *numbers << endl;
	cout <<" -> value of 2nd index : "<<*(numbers+1)<< endl;
	cout <<" -> value of 3rd index : "<<*(numbers+2)<< endl;

	int sum = 0;

	for (int i = 0; i < n; i++) {
		int square = numbers[i] * numbers[i];
		sum = sum + square;
	}

	return sum;
}

int main() {
	int numbers[] = { 5,3,1,6,3 };

	cout << "Address of numbers[0] (5): >>>" << endl;
	cout <<"Inside main(): "<< & numbers[0] << endl;

	int squareSum = getSquareSum(numbers,5);

	cout << "Square sum = " << squareSum << endl;

	return 0;
}