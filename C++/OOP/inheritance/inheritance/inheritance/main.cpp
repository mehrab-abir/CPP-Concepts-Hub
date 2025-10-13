#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include "core.h"

using namespace std;

int main() {
	Animal cat("Bilai");

	cout << cat.getName()<<endl;

	cout << "Cat:: ";
	cat.sound();
	cout<<": Meow" << endl;

	Dog dg("Kutta");
	cout << dg.getName() << endl;
	dg.sound();

	cout << endl << endl;

	//math and cube
	int n;
	cout << "Enter a number for math's object: ";
	cin >> n;

	Math a(n); //base class object

	cout << "The number: " << a.getNum() << endl;
	a.square();

	a.mathematices();

	cout << endl;

	//derived class object
	cout << "\nDerived class from here...\n";
	Cube c(n);
	c.getCube();
	c.square(); //inherited from base class

	c.mathematices(); 

	cout << endl;


	return 0;
}