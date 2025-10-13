#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<string>

#include "player.h"

using namespace std;

int main() {
	Player p1("Neymar", "Forward", "Dribbling", "Creativity", "Flair");
	p1.display();

	Player p2 = p1; //copy constructor works here
	cout << "After copying p1 into p2:\n";
	p2.display();

	Player p3("temp", "temp2", "x", "y", "z");
	p3 = p1; //copy assignment works here

	cout << "After assigning p1 to p3:\n";
	p3.display();

	return 0;
}