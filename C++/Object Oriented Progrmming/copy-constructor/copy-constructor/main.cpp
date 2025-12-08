#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>

#include "class.h"

using namespace std;

int main() {
	//class and object with no pointer
	/*SuperHero CaptainAmerica("Steve Rogers",103,"Captain America- The Winter Soldier");
	CaptainAmerica.display();

	SuperHero FirstAvenger = CaptainAmerica;

	cout << "After copying 'Captain America' into 'FirstAvenger':" << endl;
	cout << "[The content(here, name and age) are same, as copied, but memory addresses are different because of deep copy]..That's the purpose of copy constructor\n";
	FirstAvenger.display();*/


	//Deep- class and object -- with dynamic memory allocation
	/*Deep Obj1(10);
	
	Obj1.display();


	Deep Obj2 = Obj1;

	cout << "After copying Obj1 into Obj2:\n";
	cout << "[Data value is same as it's copied, but memory address is different, that's the purpose of deep copy- Copy Constructor]\n";
	Obj2.display();*/



	//class and object -- Movie
	/*Movie Nolan("Inception");
	Nolan.display();

	Movie Antal = Nolan;

	cout << "After copying Nolan into Antal:\n";
	Antal.setName("Predators");

	Antal.display();*/

	Player Forward("Neymar");
	Forward.display();

	Player Attacker = Forward;

	cout << "After copying Forward into Attacker [Same content, Different address]: \n";
	Attacker.display();


	return 0;
}
