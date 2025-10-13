#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

#include "class.h"

using namespace std;

Player::Player(const char* playerName) {
	name = new char[strlen(playerName) + 1]; 
	strcpy(name, playerName); 

	/*jodi argument er naam same rakha hoy(name), tahole  left side er 'name' er jaygay this->name
	hobe..r playerName er jaygay argument er naam'e hobe(name)...see below

	eirokom..
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	
	*/

	
	//'name' hocche jeta argument hisebe ashche
	//this->name hocche 'Player' class er 'name' -- ekhane char* array
}

//copy constructor
Player::Player(const Player& src) {
	this->name = new char[strlen(src.name) + 1]; //allocates new memory for copied object
	strcpy(this->name, src.name);

	//src.name hocche source object er 'name'
	//this->name hocche new object er 'name'
}

//destructor
Player::~Player() {
	delete[] name;
}

void Player::display() {
	cout << "Name: " << name << endl;
	cout << "Address: " << static_cast<void*>(name) << endl;
	cout << endl;
}