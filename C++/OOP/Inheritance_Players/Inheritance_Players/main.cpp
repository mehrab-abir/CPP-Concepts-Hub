#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

#include "Player.h"

using namespace std;

int main() {
	Striker Mbappe("Kylian Mbappe", 26, "Real Madrid", 40);
	
	Defender Silva("Thiago Silva", 41, "Fluminense", "Center Back");

	Mbappe.displayInfo();
	Silva.displayInfo();

	return 0;
}