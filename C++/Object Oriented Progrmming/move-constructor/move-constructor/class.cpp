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
		delete name;
		delete[] club;

		this->name = new string(*src.name);

		this->club = new char[strlen(src.club) + 1];
		strcpy(this->club, src.club);
	}
	return *this;
}


//move constructor
// it moves the pointer from old object to new object, so no new memory is allocated
// memory usage remain same
// efficient

Player::Player(Player&& src) {
	this->name = src.name; 
	/*
	The new object’s pointer (this->name) now points to the same memory that src.name was pointing to.
	*/

	/*
	before src.name = nullptr, both old and new object pointing to same memory after the line above.
	after src.name = nullptr (below), what src.name was pointing to has been changed to NULL
	*/
	src.name = nullptr; 
	/*
	now, src.name is pointing to nullptr (before it was pointing to a specific memory which is now
	being pointed by the new object's 'name'), meaning source object is empty, and safe to delete by
	the destructor. 
	*/

	//similarly...
	this->club = src.club;
	src.club = nullptr;
}

Player::~Player() {
	delete name;
	delete[] club;
}

void Player::display() {
	cout << "Player: " << *name << ",\tclub: " << club << endl;

	cout << endl;
}
