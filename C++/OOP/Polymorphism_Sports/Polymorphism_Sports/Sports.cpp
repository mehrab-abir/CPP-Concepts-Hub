#include<iostream>
#include<string>

#include "Sports.h"

using namespace std;

Sports::Sports() {
	cout << "Base class constructor-----------" << endl;
}

void Sports::play() {
	cout << "Playing sports..." << endl;
}

Football::Football() {
	cout << "Derived class Football's constructor---------" << endl;
}
void Football::play() {
	cout << "Playing Football +++++++" << endl;
}

Badminton::Badminton() {
	cout << "Derived class Badminton constructor----------" << endl;
}
void Badminton::play() {
	cout << "Playing Badminton ****************" << endl;
}

void playGame(Sports* s) {
	s->play();
	cout << endl;
}