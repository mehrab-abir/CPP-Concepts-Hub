#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

#include "class.h"

using namespace std;

int main() {

	Player Midfielder("Luka Modric");
	Midfielder.display();

	Player DefensiveMid("Casemiro");
	DefensiveMid.display();

	Player BrazilianMidfielder = DefensiveMid; //copy constructor works here

	cout << "After copying DefensiveMid into BrazilianMidfielder:\n";
	cout << "For BrazilianMidfielder >>\n";
	BrazilianMidfielder.display();

	//----
	//Both "Midfielder" and "DefensiveMid" objects alreasy exist
	Midfielder = DefensiveMid; //copy assignment operator works here
	cout << "After assigning DefensiveMid into Midfielder, 'name' of Midfielder changes to 'Casemiro' from 'Luka Modric':\n";

	cout << "For Midfielder obj >>\n";
	Midfielder.display(); //should print 'Casemiro' instead of 'Luka Modric'

	return 0;
}