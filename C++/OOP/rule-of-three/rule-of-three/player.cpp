#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

#include "player.h"

using namespace std;

//constructor
Player::Player(const char* name, const char* position, const char* skill_1, const char* skill_2, const char* skill_3) {
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);

	this->position = new char[strlen(position) + 1];
	strcpy(this->position, position);

	//char** is a pointer to pointers
	//skills has three strings, each char* is a pointer to each string,,char** points to the whole array
	skills = new char* [3]; //each item is a char*, a pointer of a string

	skills[0] = new char[strlen(skill_1) + 1];
	strcpy(skills[0], skill_1);

	skills[1] = new char[strlen(skill_2) + 1];
	strcpy(skills[1], skill_2);

	skills[2] = new char[strlen(skill_3) + 1];
	strcpy(skills[2], skill_3);
}


//copy constructor
Player::Player(const Player& src) {
	this->name = new char[strlen(src.name) + 1];
	strcpy(this->name, src.name);

	this->position = new char[strlen(src.position) + 1];
	strcpy(this->position, src.position);

	skills = new char* [3];

	for (int i = 0; i < 3; i++) {
		this->skills[i] = new char[strlen(src.skills[i]) + 1];
		strcpy(this->skills[i], src.skills[i]);
	}
}

//copy assignment operator
Player& Player::operator=(const Player& src) {
	if (this != &src) {
		delete[] name;
		delete[] position;
		for (int i = 0; i < 3; i++) {
			delete[] skills[i]; //as each index item is a dynamic array
		}
		delete[] skills; //as the whole 'skills' is a dynamic array

		this->name = new char[strlen(src.name) + 1];
		strcpy(this->name, src.name);

		this->position = new char[strlen(src.position) + 1];
		strcpy(this->position, src.position);

		skills = new char* [3];
		for (int i = 0; i < 3; i++) {
			this->skills[i] = new char[strlen(src.skills[i]) + 1];
			strcpy(this->skills[i], src.skills[i]);
		}
	}
	return *this;
}

//destructor
Player::~Player() {
	delete[] name;
	delete[] position;

	for (int i = 0; i < 3; i++) {
		delete[] skills[i]; //as each index item is a dynamic array
	}
	delete[] skills; //as the whole 'skills' is a dynamic array
}

void Player::display() {
	cout << "Name: " << name << endl;
	cout << "Position: " << position << endl;

	cout << "Skills: ";
	for (int i = 0; i < 3; i++) {
		cout << skills[i];
		if (i < 2) cout << ","; //for formatting
	}

	cout << endl<<endl;
}