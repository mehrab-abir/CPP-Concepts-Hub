#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>

#include "class.h"

using namespace std;

int main() {
	Player p1("Van Dijk", "Liverpool");

	cout << "In p1:\n";
	p1.display();

	Player p2("Rodrygo", "Real Madrid");

	cout << "In p2:\n";
	p2.display();

	p1 = move(p2); //move assignment operstor works here
	//content of p2 has been moved to p1
	//p2 is now empty

	cout << "In p1:\n";
	p1.display(); //should display Rodrygo and Real Madrid

	return 0;
}