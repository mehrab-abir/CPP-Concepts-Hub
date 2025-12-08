#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "Player.h"

using namespace std;

Player::Player(string name, int age, string club) {
	this->name = name;
	this->age = age;
	this->club = club;
}

Player::~Player() {
	cout << "Player class destructor" << endl;
}

Striker::Striker(string name, int age, string club, int goals) : Player(name,age,club) {
	this->goals = goals;
}
void Striker::displayInfo() {
	cout << "Striker >>>\n";
	cout << "Name: " << name << endl;
	cout << "Age: " << age<<endl;
	cout << "Club: " << club << endl;
	cout << "Goals: " << goals << endl;

	cout << endl;
}

Striker::~Striker() {
	cout << "Striker destruction" << endl;
}

Defender::Defender(string name, int age, string club, string position) :Player(name, age, club) {
	this->position = position;
}

void Defender::displayInfo() {
	cout << "Defender >>>\n";
	cout << "Name: " << name << endl;
	cout << "Age: " << age<<endl;
	cout << "Club: " << club << endl;
	cout << "Position: " << position << endl;

	cout << endl;
}

Defender::~Defender() {
	cout << "Defender Destruction" << endl;
}