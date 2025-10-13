#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>

#include "class.h"

using namespace std;

int main() {
	Player p1("Rodrygo", "Real Madrid");
	p1.display();

	Player p2 = move(p1); //move constructor works here
	//p1's content moved to p2
	//p1 is now empty

	cout << "\nAfter move constructor:\n";
	p2.display();

	return 0;
}