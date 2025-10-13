#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include "core.h"

using namespace std;

//Base class definitaion
Animal::Animal(string name) {
	this->name = name;
}

void Animal::sound() {
	cout << "Animals sound" << endl;
}

string Animal::getName() {
	return name;
}


//Derived class definition
Dog::Dog(string name) : Animal(name) {
	cout << "Dogs name: " << name << endl; //explicitly calling base class constructor in derived class
}

void Dog::sound() {
	cout << "Dog barks" << endl;
}


//Base class definition- Math
Math::Math(int num) {
	this->num = num;
	cout << "Math Class(Base) Constructor -> number : " << num << endl;
}

int Math::getNum() {
	return num;
}

void Math::square() {
	cout << "Square of " << num << ": " << num * num << endl;
}

void Math::mathematices() {
	cout <<  "  >> mathematices() function from Math class" << endl;
}

Math::~Math() {
	cout << "Destructor for Math class" << endl;
}

//derived class definition - Cube
Cube::Cube(int num) : Math(num) {
	cout << "Derived class constructor -> num: " << getNum() << endl;
}

void Cube::getCube() {
	int num = getNum();
	cout << "Cube of " << num << ": " << num * num * num << endl;
}

//function overriding
void Cube::mathematices() {
	cout << "  >> mathematices() function from Cube class" << endl;

}
Cube::~Cube() {
	cout << "Destructor for Cube class" << endl;
}