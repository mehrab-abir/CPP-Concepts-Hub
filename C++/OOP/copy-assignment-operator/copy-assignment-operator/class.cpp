#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

#include "class.h"

using namespace std;

//constructor
Player::Player(const char* name) {
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

//copy constructor-- Deep copy
Player::Player(const Player& src) {
	this->name = new char[strlen(src.name) + 1]; 
	strcpy(this->name, src.name);
}

//copy assignment operator
/*
'this' refers to the destination object, 'src' is the source object
*/
Player& Player::operator=(const Player& src) {
	if (this != &src) { //make sure we are assigning an object to a different object
		delete[] name; //delete the memory of the destination object (of its member variable)

		//allocate new memory for the destination object in order for deep copy 
		this->name = new char[strlen(src.name) + 1]; 
		
		//deep copy the content of the source object into the destination object
		strcpy(this->name, src.name);
	}
	return *this; //for chaining purpose, Standard/Best practice
}

//destructor
Player::~Player() {
	delete[] name;
}

void Player::display() {
	cout << "Player Name: " << name << endl;
	cout << "Memory address of 'name': " << static_cast<void*>(name) << endl;

	cout << endl;
}