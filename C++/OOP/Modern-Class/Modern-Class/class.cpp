#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "class.h"

using namespace std;

Player::Player(string name, string club, int jersyNum) {
	this->name = name;
	this->club = club;
	this->jersyNum = jersyNum;
}

void Player::displayInfo() {
	cout << "Player ->\n";
	cout << "Name: " << name << endl;
	cout << "Club: " << club << endl;
	cout << "Jersy Number: " << jersyNum << endl;
	cout << endl;
}