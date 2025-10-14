#ifndef PLAYER_H
#define PLAYER_H
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Player {
	
public:
	string name;
	int age;
	string club;

	Player(string name, int age, string club);

	virtual void displayInfo() = 0;

	virtual ~Player();
};

class Striker :public Player {
public:
	//name, age, club here
	int goals;

	Striker(string name, int age, string club, int goals);

	void displayInfo() override;

	~Striker();
};

class Defender :public Player {
public:
	//name, age, club here
	string position;

	Defender(string name, int age, string club, string position);

	void displayInfo() override;

	~Defender();
};





#endif
