#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "Sports.h"

using namespace std;

int main() {
	Sports Match;

	Match.play(); //playing sports....

	Sports* football = new Football();
	football->play(); //direct call of play()

	playGame(football); //calling the generic function that takes a base class pointer,,here football, called play() based on the pointer it is pointing during runtime..>> dynamic dispatch

	Sports* badminton = new Badminton();

	//both calls the play(), one is direct, the other one is decided during runtime, based on the pointer passed,,here badminton
	badminton->play();
	playGame(badminton);


	return 0;
}