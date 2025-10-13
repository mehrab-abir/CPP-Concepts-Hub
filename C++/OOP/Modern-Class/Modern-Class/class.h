#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Player {
	string name;
	string club;
	int jersyNum;

public:
	Player() = default;
	Player(string name, string club, int jersyNum);

	//for copy constructor - allowing default copy operations
	Player(const Player&) = default;

	//for copy assignment operator
	Player& operator=(const Player&) = default;

	//------------
	
	//for move constructor -- allowing default move operations
	Player(Player&&) noexcept = default;

	Player& operator=(Player&&) noexcept = default;

	~Player() = default; //destructor, no implementaion needed

	void displayInfo();
};
