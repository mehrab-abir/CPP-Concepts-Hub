#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main() {

	int a = 10; //static variable- tack memory

	int* x = new int; //dynamic variable - heap memory
	//heap memory returns an address, so pointer is used to store it

	*x = 50;
	cout << "Dynamic x = " << *x << endl;

	delete x; //must be deleted at the end

	return 0;
}
