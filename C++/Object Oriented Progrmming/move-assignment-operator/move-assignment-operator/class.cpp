#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>

#include "class.h"

using namespace std;

//constructor
Player::Player(string name, const char* club) {
	this->name = new string(name);

	this->club = new char[strlen(club) + 1];
	strcpy(this->club, club);
}

//copy constructor
Player::Player(const Player& src) {
	this->name = new string(*src.name);

	this->club = new char[strlen(src.club) + 1];
	strcpy(this->club, src.club);
}

//copy assignment operator
Player& Player::operator=(const Player& src) {
	if (this != &src) {
		delete name; //delete old memory first
		delete[] club;

		this->name = new string(*src.name); //allocate new memory and copy data from src to destination

		this->club = new char[strlen(src.club) + 1];
		strcpy(this->club, src.club);
	}
	return *this;
}


//move constructor
Player::Player(Player&& src) {
	this->name = src.name; 
	src.name = nullptr;
	
	this->club = src.club;
	src.club = nullptr;
}

//move assignment operator
//'this' refers to the destination object, which already exists, has its own data
//move assignment operator moves the resources of source object to the destination object
Player& Player::operator=(Player&& src) {
	if (this != &src) {
		delete name;
		delete[] club;

		/*after deleting name and club[], the memory for name and club is freed. Now we are making
		this->name point to the address of the 'name' of 'src'. That's why, this->name = src->name
		meaning, name is now pointing to same memory that src's name is pointing. At the end, we are
		assigning nullptr to src.name, so no new memory is used here */
		this->name = src.name;
		this->club = src.club;

		src.name = nullptr;
		src.club = nullptr;
	}
	return *this;
}

//destructor
Player::~Player() {
	delete name;
	delete[] club;
}

void Player::display() {
	cout << "Player: " << *name << ",\tclub: " << club << endl;

	cout << endl;
}
