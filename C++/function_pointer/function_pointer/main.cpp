#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

int add(int a, int b) {
	return a + b;
}
int product(int a, int b) {
	return a * b;
}

void text() {
	cout << "Some text" << endl;
}

void nolan(string movie) {
	cout << "Nolan's " << movie << endl;
}
void cameron(string movie) {
	cout << "Cameron's " << movie << endl;
}
void scorsese(string movie) {
	cout << "Scorsese's " << movie << endl;
}

int main() {
	int (*fPtr)(int, int);

	fPtr = add;
	int sum = fPtr(5, 6);
	cout << "Sum: " << sum << endl;

	//assigning same fPtr to 'product' as function signature is same
	fPtr = product;
	int productResult = fPtr(6, 3);
	cout << "Product: " << productResult << endl;

	cout << "\n***********************" << endl;

	//without parameter
	void (*msg)() = text;
	msg();

	cout << "\n***********************" << endl;

	//array of fucntion pointer
	void (*movies[])(string) = { nolan,cameron,scorsese };

	(*movies[0])("Inception");
	movies[1]("Avatar");
	movies[2]("Shutter Island");

	cout << nolan << endl; //address of the function 'nolan'

	return 0;
}
