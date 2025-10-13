#ifndef CLASS_H
#define CLASS_H

#include<string>
#include<cstring>

using namespace std;

class Player {
	string* name;
	char* club;

public:
	Player(string name, const char* club);

	//copy constructor
	Player(const Player& src);

	//copy assignment operator
	Player& operator=(const Player& src);

	//move constructor
	Player(Player&& src);

	//move assignment operator
	Player& operator=(Player&& src);

	//destructor
	~Player();

	void display();
};

#endif
