#ifndef CLASS_H
#define CLASS_H

class Player {
	char* name;

public:
	//constructor
	Player(const char* name);

	//copy constructor
	Player(const Player& src);

	//copy assignment operator
	Player& operator=(const Player& src);

	~Player();

	void display();
};


#endif
