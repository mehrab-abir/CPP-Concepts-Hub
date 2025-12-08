#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "class.h"

using namespace std;

int main() {

	Player Brazilian("Rodrygo", "Real Madrid", 11);

	cout << "Brazilian Player..." << endl;
	Brazilian.displayInfo();

	Player Spanish = Brazilian; //copy constructor

	cout << "Spanish Player...." << endl;
	Spanish.displayInfo();

	Player LatinPlayer("Vini Jr.", "Real Madrid", 7);

	cout << "Latin Player..." << endl;

	LatinPlayer.displayInfo();

	//Both LatinPlayer and Brazilian already exist, have their own content
	LatinPlayer = Brazilian; //copy assignment

	cout << "After copy assignment: \n";

	cout << "Latin Player...again" << endl;
	LatinPlayer.displayInfo(); //should display 'Rodrygo' instead of Vini.

	Player English("Bellingham", "Real Madrid", 5);

	cout << "English Player..." << endl;
	English.displayInfo();

	English = move(Brazilian); // move assignment, both English and Brazilian have their content

	cout << "After moving:" << endl;
	English.displayInfo(); //should display 'Rodrygo'

	Player Croatia("Luka Modric", "Real Madrid", 10);

	cout << "Croatia Player..." << endl;

	Croatia.displayInfo();

	Player Madridista = move(Croatia); //move constructor

	cout << "After move constructor applying...\n";
	
	cout << "Madridista Player..." << endl;

	Madridista.displayInfo(); //Should display "Luka Modric"

	return 0;
}
