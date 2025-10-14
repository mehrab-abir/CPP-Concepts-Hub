#ifndef SPORTS_H
#define SPORTS_H

#include<iostream>
#include<string>

using namespace std;

class Sports {
public:
	Sports();
	virtual void play();
};

class Football :public Sports {
public:
	Football();
	void play() override;
};

class Badminton : public Sports {
public:
	Badminton();
	void play() override;
};

void playGame(Sports* s);

#endif