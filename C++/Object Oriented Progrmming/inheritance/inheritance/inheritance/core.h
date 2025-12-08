#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

//Base class
class Animal {
private:
	string name;
public:
	Animal(string name); //base class constructor with parameter

	void sound();

	string getName();
};

//Derived class
class Dog :public Animal {
public:
	Dog(string name); //derived class constructor with parameter

	//overriding function
	void sound();
};

//base class- math
class Math {
	int num;
public:
	Math(int num);

	int getNum();

	void square();

	void mathematices(); //overridden in derived class

	~Math();
};

class Cube : public Math {
	//int num is here
public:
	Cube(int num);
	
	void getCube();

	//function overriding
	void mathematices();

	~Cube();
};